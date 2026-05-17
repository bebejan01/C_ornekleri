#include <iostream>
using namespace std;

class Dugum {
public:
    int veri;
    Dugum* sol;
    Dugum* sag;

    Dugum(int deger) {
        veri = deger;
        sol = NULL;
        sag = NULL;
    }
};

class IkiliAramaAgaci {
private:
    Dugum* kok;

    Dugum* ekle(Dugum* node, int sayi) {
        if (node == NULL) {
            return new Dugum(sayi);
        }

        if (sayi < node->veri) {
            node->sol = ekle(node->sol, sayi);
        }
        else if (sayi > node->veri) {
            node->sag = ekle(node->sag, sayi);
        }

        return node;
    }

    void siraliYazdir(Dugum* node) {
        if (node != NULL) {
            siraliYazdir(node->sol);
            cout << node->veri << " ";
            siraliYazdir(node->sag);
        }
    }

public:
    IkiliAramaAgaci() {
        kok = NULL;
    }

    void ekle(int sayi) {
        kok = ekle(kok, sayi);
    }

    void siraliYazdir() {
        siraliYazdir(kok);
    }
};

int main() {
    IkiliAramaAgaci agac;

    agac.ekle(50);
    agac.ekle(30);
    agac.ekle(20);
    agac.ekle(40);
    agac.ekle(70);
    agac.ekle(60);
    agac.ekle(80);

    cout << "Agactaki verilerin sirali hali: " << endl;
    agac.siraliYazdir();

    cout << endl << endl;

    return 0;
}






























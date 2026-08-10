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

Dugum* ekle(Dugum* kok, int sayi) {

    if (kok == NULL)
        return new Dugum(sayi);

    if (sayi < kok->veri)
        kok->sol = ekle(kok->sol, sayi);
    else if (sayi > kok->veri)
        kok->sag = ekle(kok->sag, sayi);

    return kok;
}

void Yazdir(Dugum* kok) {

    if (kok != NULL) {
        Yazdir(kok->sol);
        cout << kok->veri << " ";
        Yazdir(kok->sag);
    }
}

int yukseklik(Dugum* kok) {

    if (kok == NULL)
        return 0;

    int solY = yukseklik(kok->sol);
    int sagY = yukseklik(kok->sag);

    return 1 + (solY > sagY ? solY : sagY);
}

int dugumSayisi(Dugum* kok) {
	if (kok == NULL)
		return 0;
		
	return 1 + dugumSayisi(kok->sol) + dugumSayisi(kok->sag);
}

int yaprakSayisi(Dugum* kok) {
	if (kok == NULL)
		return 0;
		
	if (kok->sol == NULL && kok->sag == NULL)
        return 1;
		
	return yaprakSayisi(kok->sol) + yaprakSayisi(kok->sag);
}

void yapraklariYazdir(Dugum* kok) {
    if (kok == NULL)
        return;

    if (kok->sol == NULL && kok->sag == NULL)
        cout << kok->veri << " ";

    yapraklariYazdir(kok->sol);
    yapraklariYazdir(kok->sag);
}

int main() {
    Dugum* kok = NULL;
    kok = ekle(kok, 50);
    ekle(kok, 30);
    ekle(kok, 20);
    ekle(kok, 40);
    ekle(kok, 70);
    ekle(kok, 60);
    ekle(kok, 80);
    cout << "Yazdirma: ";
    
    
    Yazdir(kok);
    cout << "\nYukseklik: " << yukseklik(kok);
    cout << "\nDugum Sayisi: " << dugumSayisi(kok);
    cout << "\nYaprak Sayisi: " << yaprakSayisi(kok);
    cout << "\nYapraklar: "; 
	yapraklariYazdir(kok);
    return 0;
}
























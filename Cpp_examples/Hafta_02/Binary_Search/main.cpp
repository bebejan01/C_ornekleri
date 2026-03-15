#include <iostream>

using namespace std;

// Ýkili arama fonksiyonu
int binarySearch (int dizi[], int baslangic, int bitis, int aranan) {
	if (bitis >= baslangic) {
		int orta = baslangic + (bitis - baslangic) / 2;
		
	if (dizi[orta] == aranan)
	return orta;
	
	if (dizi[orta] > aranan)
	return binarySearch(dizi, orta + 1, bitis, aranan);
	}
	return -1;
}

int main() {
	int dizi[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int boyut = sizeof(dizi) / sizeof(dizi[0]);
	int aranan = 9;
	
	int sonuc = binarySearch(dizi, 0, boyut - 1, aranan);
	
	if (sonuc != -1)
		cout << "Aranan eleman " << aranan << " dizinin " << sonuc << ". indisinde bulundu. "  << endl;
	else
		cout << "Aranan eleman bulunamadi." << endl;
		
	return 0;
}

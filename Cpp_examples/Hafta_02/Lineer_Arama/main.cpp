#include <iostream>

using namespace std;

// Lineer arama fonksiyonu
int linearSearch(int dizi[], int boyut, int aranan) {
	for (int i = 0; i < boyut; ++i) {
		if (dizi[i] == aranan) {
			return i;     // Aranan elemanýn indisini döndür
		}
	}
	return -1;    // Aranan eleman bulunmadý, -1 döndür
}

int main() {
	int dizi[] = {4, 2, 7, 1, 9, 5};
	int boyut = sizeof(dizi) / sizeof(dizi[0]);    // Dizinin boyutunu hesapla
	
	int aranan; 
	cout << "Aranacak elemani girin: ";
	cin >> aranan;
	
	int sonuc = linearSearch(dizi, boyut, aranan);
	
	if (sonuc != -1) {
		cout << "Aranan eleman " << sonuc << ". indiste bulundu." << endl;
	} else {
		cout << "Aranan eleman bulunamadi." << endl;
	}
	
	return 0;
}

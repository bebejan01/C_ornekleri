#include <iostream>

using namespace std; 

// Bubble Sort Fonksiyonu
void bubbleSort(int arr[], int n) {
	// Dýþ döngü: Her geçiþte en büyük öðe "baloncuk" gibi sona yerleþir
	for (int i = 0; i < n - 1; i++) {
		// Ýç döngü: Geriye doðru karþýlaþtýrmalar yapýlýr
		for (int j = 0; j < n - 1 - i; j++) {
			// Eðer arr[j] > arr[j + 1] ise, öðeleri takas yap
			if (arr[j] > arr[j + 1]) {
				// Takas iþlemi
				int temp = arr[j];
				arr[j] = arr [j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// Dizi yazdýrma fonksiyonu
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
		
	}
	cout << endl;
}

int main() { 
	int arr[] = {64, 34, 25, 12, 22, 11, 90};   // Sýralanacak dizi
	int n = sizeof(arr) / sizeof(arr[0]);       // Dizinin uzunluðunu hesapla
	
	cout << "Orijinal dizi: ";
	printArray(arr, n);
	
	bubbleSort(arr, n); // Bubble sort ile diziyi sýrala
	
	cout << "Siralanmis dizi: ";
	printArray(arr, n);
	
	return 0;   
}

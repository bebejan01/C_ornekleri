#include <iostream>
#define MAX 5
using namespace std;

class Linear_Queue {
private:
	int lqueue_arr[MAX];
	int front, rear;
	
public:
	Linear_Queue() {
		front = rear = -1;
	}
	
	void insert (int item) {
		if (rear == MAX -1) {
			cout << "Kuyruk Dolu" << endl;
			return;
		}
		if (front == -1) {
			front = 0;
		}
		rear++;
		lqueue_arr[rear] = item;
		cout << item << " kuyruða eklendi." << endl;
	}
	
	void del() {
		if (front == -1 || front > rear) {
			cout << "Kuyruk Bos" << endl;
			return;
		}
		cout << "Kuyruktan Silinen Eleman : " << lqueue_arr[front] << endl;
		front++;
	}
	
	void display() {
		if (front == -1) {
			cout << "Kuyruk Bos" << endl;
			return;
		}
		cout << "Kuyrukta Bulunan Elemanlar : ";
		for(int i = front; i <= rear; i++) {
			cout << lqueue_arr[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	int choice, item;
	Linear_Queue lq;
	do {
		cout << "1.Ekle\n";
		cout << "2.Sil\n";
		cout << "3. Kuyrugu Goruntule\n";
		cout << "4. Cikis\n\n";
		cout << "Seciminiz : ";
		
		cin >> choice;
		cout << endl;
		switch (choice) {
			case 1:
				cout << "Eklemek istediðiniz elemani giriniz : ";
				cin >> item;
				lq.insert(item);
				break;
			case 2: 
				lq.del();
				break;
			case 3:
				lq.display();
				break;
			case 4:
				break;
			default:
				cout << "Hatali Giris\n\n";
				
		}
	}  while (choice != 4);
	return 0;
}








































#include <iostream>
using namespace std;

const int MAX = 5;

class Circular_Queue {
private:
    int cqueue_arr[MAX];
    int front, rear;

public:
    Circular_Queue() {
        front = rear = -1;
    }

    void Enqueue(int item) {
        if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
            cout << "Kuyruk Dolu" << endl;
            return;
        }

        if (front == -1) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % MAX;
        }

        cqueue_arr[rear] = item;
    }

    void Dequeue() {
        if (front == -1) {
            cout << "Kuyruk Bos" << endl;
            return;
        }

        cout << "Kuyruktan Silinen Eleman : " << cqueue_arr[front] << endl;

        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Kuyruk Bos" << endl;
            return;
        }

        int i = front;
        cout << "Kuyrukta Bulunan Elemanlar : ";

        do {
            cout << cqueue_arr[i] << " ";
            i = (i + 1) % MAX;
        } while (i != (rear + 1) % MAX);

        cout << endl;
    }
};

int main2() {
    int choice, item;
    Circular_Queue cq;

    cq.Enqueue(5);
    cq.Enqueue(10);
    cq.Enqueue(15);
    cq.Enqueue(20);
    cq.Enqueue(25);
    cq.Enqueue(30);
    cq.Dequeue();
    cq.Dequeue();
    cq.Enqueue(35);
    cq.Enqueue(40);
    cq.display();

    return 0;
}

int main() {
    Circular_Queue cq;
    int choice, item;

    while (true) {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Ekle" << endl;
        cout << "2. Sil" << endl;
        cout << "3. Kuyrukta Bulunan Elemanlar" << endl;
        cout << "4. Cikis" << endl;
        cout << "Seciminizi girin: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Eklenecek elemani girin: ";
            cin >> item;
            cq.Enqueue(item);
            break;

        case 2:
            cq.Dequeue();
            break;

        case 3:
            cq.display();
            break;

        case 4:
            cout << "Programdan cikiliyor..." << endl;
            return 0;

        default:
            cout << "Gecersiz secim!" << endl;
        }
    }
}

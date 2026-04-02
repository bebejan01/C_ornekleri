#include <iostream>
#include <string>
using namespace std;

class Stack {
public:
    char dizi[10];
    int tepe = -1;

    void push(char c) {
        tepe++;
        dizi[tepe] = c;
    }

    char pop() {
        return dizi[tepe--];
    }

    bool bosMu() {
        return tepe == -1;
    }
};

int main() {
    string kelime;
    cout << "Kelime gir: ";
    cin >> kelime;

    Stack s;

    for (int i = 0; i < kelime.length(); i++) {
        s.push(kelime[i]);
    }

    cout << "Tersi: ";
    while (!s.bosMu()) {
        cout << s.pop();
    }

    return 0;
}

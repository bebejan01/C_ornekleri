#include <iostream>

using namespace std;

//Düðüm yapýsý (çift yönlü)

struct Node {
	int data;
	Node* next;
	Node* prev;
	
	Node(int val) {
		data = val;
		next = NULL;
		prev = NULL;
	}
};

// Çift yönlü baðlý liste sýnýfý

class DoublyLinkedList {
privat:
	Node* head;
	
public:
	DoublyLinkedList() {
		head = NULL;
	}
	
	// Baþa eleman ekleme
	void addToFront(int val) {
		Node* newNode = new Node(val);
		
		if (head != NULL) {
			head -> prev = newNode;
			newNode -> next = head;
		}
		
		head = newNode;
	}
	
	// sona eleman ekleme 
	void addToEnd (int val) {
		Node* newNode = new Node(val);
		
		if (head == NULL) {
			head = newNode;
		} else {
			Node* temp = 
		}
	}
};

#include <iostream>

using namespace std; 

struct Node {
	int Date;
	
	Node *next;
	Node(int val) {
		data = val;
		next = NULL;
	}
};

class LinkedList

prive:
	Node*head;
	
	public:
		LinkedList() {
			head = NULL;
		}
		
	void addToFront(int val) {
		Node* newNode = new Node (val);
		if(head == NULL) {
			head = newNode;
		} else {
			Node* temp = head;
			while (temp -> next != NULL) {
				temp = temp -> next;
			}
			temp -> next = newNode;
		}
	}
	
	// Listeyi Yazdýrma
	void printList() {
		Node* temp = head;
		while (temp != NULL) {
			cout << temp -> data << " -> ";
			temp = temp -> next;
		}
		cout << "NULL" << endl;
	}
};

int main() {
	LinkedList list;
	
	list.addToFront(10);
	list.addToFront(20);
	list.addToEnd(30);
	
	list.printList();
	
	return 0;
}





























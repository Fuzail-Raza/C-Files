#include<iostream>
using namespace std;
#define loop(a,b) for (int i = a; i < b; i++)
#define int long long

class node {
public:
	int data;
	node* next;
	node(int val) {
		data = val;
		next = NULL;
	}
};
void insertAtTail(node* &head,int val) {		
	
	node* n = new node(val);
	if (head==NULL) {
		head = n;
		return;
	}
	node* temp = head;
	while (temp->next!=NULL) {
		temp = temp->next;
	}
	temp->next = n;
}
void display(node* head) {
	node* temp = head;
	while (temp!=NULL) {
		cout << temp->data << "->";
		temp = temp->next;	
	}
	cout <<"Null"<< endl;

}

void insertAtHead(node*& head, int val) {

	node* n = new node(val);
	n->next = head;
	head = n;
}
bool search(node*& head, int key) {
	node* temp = head;
	while (temp!=NULL) {
		if (temp->data == key) { 
			return true; }
		temp = temp->next;
	}
	return false;
}
void main() {
	int  a;
	cout << sizeof(a);
	loop(2, 4) {
		cout << 1;
	 }
	cout << endl;
	node* head = NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	display(head);
	insertAtHead(head, 5);
	display(head);
	cout << search(head, 3);
}

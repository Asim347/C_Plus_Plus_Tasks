#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
	Node(int val){
		data = val;
		next = NULL;
	}
};
class CircularLL{
	private:
		Node* head;
		Node* tail;
	public:
		CircularLL(){
			head = tail = NULL;
		}
	void insertAtHead(int val){
		Node* newNode= new Node(val);
		if(head == NULL){
		   head = tail = newNode;
		   tail->next = head; 
		}else{
			newNode->next = head;
			head = newNode;
			tail->next = head;
		}
	}
	void display(){
    if(head == NULL) return ;
    Node* temp = head;
    while(true){
        cout << temp->data << "->";
        temp = temp->next;
        if(temp == head) 
		break;
    }
}

};
int main(){
	CircularLL cll;
	cll.insertAtHead(1);
	cll.insertAtHead(2);
	cll.display();
	return 0;
}

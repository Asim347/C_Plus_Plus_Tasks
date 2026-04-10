#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
	
	Node(int val){
		data = val;
		next = NULL;
	}
};
class Linked{
	private:
		Node* head;
	public;
	  Linked(){
	  	head = NULL;
	  }
	void insertAt(int pos, int val){
		Node* newNode = new Node(val);
		if(head == NULL){
			head = newNode;
			return;
		}
		if(pos == 1){
			newNode->next = head;
			head  = newNode;
			return; 
		}
		Node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
		}
		void display(){
			Node* temp;
			while(temp!= NULL){
				cout<<temp->data<<" ";
				cout<< "->";
			}
			cout<<endl;
		}
	}
};
int main(){
	
	Linked ll;
	ll.insertAt(1,20);
	
	
	return 0;
}

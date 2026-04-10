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
class Link{
	private:
	Node* head;
	public:
		Link(){
			head = NULL;
		}
	void insertAt(int pos, int val){
		Node* newNode = new Node(val);
		if(pos == 1){
			newNode->next = head;
			head = newNode;
			return;
		}
		Node* temp = head;
		while(temp->next !=NULL){
			temp = temp->next;
		}
		temp->next = newNode;
		return;
	}
	void deleteat(){
		if(head == NULL){
			cout<<"LL is empty ";
			return ;
		}
		Node* temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
	void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout<<"NULL" << endl;
    }
};
int main(){
	Link ll;
	ll.insertAt(1,10);
	ll.insertAt(2,20);
	ll.insertAt(3,30);
	ll.insertAt(5,50);
	ll.insertAt(4,40);
	
	ll.deleteat();
	ll.display();
	
	return 0;
}

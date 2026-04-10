#include<iostream>
using namespace std;

class Array{
	private:
		int* array;
		int* t;
		int len;
		int cap;
    public:
    	Array(int size){
    		cout<<"Creating array with capacity "<< size<<endl;
    		array = new int[size];
    		len = 0;
    		cap = size;
    		t = NULL;
    		cout<<"Array created successfully "<<endl;
		}
	bool isFull(){
		if(len == cap){
			cout<<"Array is full "<<endl;
			return true;
		}
		return false;
	}
	bool isEmpty(){
		if(len == 0){
			cout<<"Array is empty "<<endl;
			return true;
		}
		return false;
	}
	void printArray(){
		if(isEmpty()){
			return;
		}
		
		cout<<"Array content "<<endl;
		for(int i = 0; i< len;i++){
			cout<< *(t + i);
		}
		cout<<endl;
	}
	void insert(int x){
		cout<<"Trying to insert... "<<endl;
		
		if(isFull()){
			return;
		}
		
	    if(len == 0){
	    	cout<<"Inserting First element "<< endl;
	    	t = array;
	    	*t = x;
	    	len++;
	    	cout<<"Sucessfully inserted "<< x << " at position 1"<<endl;
	    	return;
		}
	    int pos;
	    cout<<"Enter position (1 to " <<(len + 1) <<" ) : ";
	    cin>>pos;
	    
	    if(pos >= 1 && pos <= len + 1)	{
	    	if(pos == (len + 1) ){
	    		cout<<"Inserting at the end "<<endl;
	    		t = array + len;
	    		*t = x;
	    		len++;
	    		cout<<"Successfully inserted  "<< x <<" at position "<< pos << endl;
	    		return;
			}
		cout<<"Inserting in middle.... "<<endl;	
		t = array + (len - 1);
		}
		
	}
   ~Array(){
   	cout<<"Cleaning up memory "<<endl;
   	delete [] array;
   }
};
int main(){
	
	cout<<"Let's build an array! "<<endl;
	
	Array myarray(5);
	myarray.insert(4);
	myarray.printArray();
	return 0;
}

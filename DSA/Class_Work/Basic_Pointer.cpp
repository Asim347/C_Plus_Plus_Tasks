#include<iostream>
using namespace std;
int main(){
	int x = 10;
	float pi = 3.14;
	char chr = 'A';
	cout<<"Values : "<< x << ", "<< pi <<", "<< chr <<endl;
	int * ptr = &x;
	float* ptr2 = &pi;
	char* ptr3 = &chr;
	
	cout<<"Addresses : "<<ptr<<" , "<<ptr2<<" , " << static_cast<void*>(ptr3) << endl;
	
	*ptr = 20;
	*ptr2 = 3.62;
	*ptr3 = 'B';
	cout<<"Modified values "<<*ptr <<" , "<<*ptr2<<" , "<<*ptr3<<endl;
	
	cout<<"Pointers : "<< ptr<<" , "<< ptr2<<" , "<< static_cast<void*>(ptr3)<<endl;
	return 0;
}

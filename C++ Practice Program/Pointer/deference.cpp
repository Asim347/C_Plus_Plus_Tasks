#include<iostream>
using namespace std;
int main(){
	// Dereference operator is used to print the value of variable
	int x = 4;
	int* p = &x;
	cout<<*p<<endl;
	*p = 5;
	cout<<*p<<endl;
	
	int y = 3;
	int z = 4;
	int* p1 = &y;
	int* p2 = &z;
	cout<<"Enter two values ";
	cin>>*p1;
	cin>>*p2;
	cout<<*p1 + * p2 <<endl;
}

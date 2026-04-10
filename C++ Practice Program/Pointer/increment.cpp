#include<iostream>
using namespace std;
int main(){
    int x = 4 ;
    int* p = &x;
	cout<<x<<endl;
	p++;
	cout<<p<<endl; 
	cout<<*p<<endl; //this is random value stored on pointer location
	
	
	int y = 4 ;
    int* p2 = &y;
	cout<<*p2<<endl;
//	*p2 = *p2 + 1;
     (*p2)++;
	cout<<*p2<<endl; 
	return 0;
}

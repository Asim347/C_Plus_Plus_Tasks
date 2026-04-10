#include<iostream>
using namespace std;
void find(int n, int* first , int* last){
	*last = n%10;
	while(n>9){
		 n/=10;
	}
	*first = n;
}
int main(){
	int n ;
	cout<<"Enter numbers ";
	cin>>n;
	int fdigit , ldigit;
	int* ptr1 = &fdigit;
	int* ptr2 = &ldigit;
	find(n, ptr1,ptr2);
	cout<<fdigit<<" "<<ldigit;
	return 0;
}

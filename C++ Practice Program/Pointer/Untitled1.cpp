#include<iostream>
using namespace std;
int main(){
	// pointer are used to store the address of a variable
	int x = 4;
	int* p = &x;
	cout<<&x<<endl;
	cout<<p;

	float y = 4.9;
	float* p2 = &y;
	cout<<&y<<endl;
	cout<<p2;
	return 0;
}

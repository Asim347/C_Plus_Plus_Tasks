#include<iostream>
using namespace std;
int main(){
	
	int a, sum = 0 ;
	cout<<" enter any  positive number ";
	cin>>a;
	for (int i = 1; i <= a; i++){
	sum += i;
	
}
    cout<<" Sum of number from 1 to "<< a << " is "<<sum << endl;  
	return 0;
}

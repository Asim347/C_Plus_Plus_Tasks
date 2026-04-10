#include<iostream>
using namespace std;
int countdigit(int n=0){
	 int count = 0;
	while (n!=0){
	  n = n / 10;
	  count++;
	}
	return count;
}
int main(){
	int num;
	cout<<" Enter any number ";
	cin>>num;
	
	cout<<countdigit(num)<<endl;
	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	
	int sum = 0;
	int num;
	cout<<" enter a number this is not negative "<<endl;
	
	cout<<" enter a number ";
	cin>>num;
	while (num>=0){
		sum += num;
		cin>>num;
	}
	cout<<" the sum of all integers is "<<sum;
	
	
	
	return 0;
}

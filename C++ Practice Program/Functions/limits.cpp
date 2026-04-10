#include<iostream>
using namespace std;
void odd_limits(int lower,int higher){
	for (int i=lower; i<=higher; i++){
		 if (i%2 !=0){
		 	cout<<" Odd numbers "<< i <<endl;
		 }
			
	}
}

int main(){
	
	int lower, higher ;
	cout<<" Enter lower limit ";
	cin>>lower;
	cout<<" Enter higher limit ";
	cin>>higher;
	odd_limits(lower,higher);
	
	return 0;
}

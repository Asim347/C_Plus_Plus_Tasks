#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<" Enter number of pairs you want to create ";
	cin>>num;
	for (int i = 1 ; i <= num; i++){
		cout<< " Pair "<<i<<": ( "<<i<< ", "<< i * 2<< ")"<<endl;
	}
	
	return 0;
}

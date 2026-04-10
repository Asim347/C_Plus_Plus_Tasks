#include<iostream>
using namespace std;
int main(){
	
	int a  ;
	cout<<" enter any number ";
	cin>>a;
	for (int i = 1; i <= a ; i++){
		cout<< i ;
	 if (i % 5 != 0 && i < a ){
		cout<<", ";
	} 
	if (i % 5 == 0){
		cout<<endl;
	}

	
	
}
	return 0;
}

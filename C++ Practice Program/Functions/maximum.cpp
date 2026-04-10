#include<iostream>
using namespace std;
void maximum_num(int a,int b,int c){
	if(a>b && a>c){
		cout<<" A is greatest "<< a <<endl; 
	} else if (b>a && b>c){ 
		cout<<" B is greatest "<< b <<endl;
	} else {
		cout<<" C is greatest  "<< c <<endl;
	}
}
int main(){
	int x,y,z;
	cout<<" Enter first number ";
	cin>>x;
	cout<<" Enter second number ";
	cin>>y;
	cout<<" Enter third number ";
	cin>>z;
	 maximum_num(x,y,z);
	
	return 0;
}

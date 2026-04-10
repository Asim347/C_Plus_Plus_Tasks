#include<iostream>
using namespace std;
void total(int a, int b, int c, int d, int e){
  int 	sum = a + b + c + d + e;
	cout<<" The sum of five numbers is " <<sum <<endl;
}
void maximum(int a, int b, int c, int d, int e){
	if(a>b && a>c && a>d && a>e){
		cout<<" The maximum number is a "<< a <<endl;
	}
	 else if(b>a && b>c && b>d && b>e){
		cout<<" The maximum number is b "<< b <<endl;
	}
	 else if(c>a && c>b && c>d && c>e){
		cout<<" The maximum number is c "<< c <<endl;
	}
	 else if(d>a && d>b && d>c && d>e){
		cout<<" The maximum number is d "<< d <<endl;
	}
	else
		cout<<" The maximum number is e "<< e <<endl;
	}

main(){
	
	int a,b,c,d,e;
	cout<<" Enter first number ";
	cin>>a;
	cout<<" Enter second number ";
	cin>>b;
	cout<<" Enter third number ";
	cin>>c;
	cout<<" Enter forth number ";
	cin>>d;
	cout<<" Enter last number ";
	cin>>e;
	
     total(a,b,c,d,e);
     maximum(a,b,c,d,e);
	
}

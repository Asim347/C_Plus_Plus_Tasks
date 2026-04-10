#include<iostream>
using namespace std;
void fibonaci(int n){
	int first = 0 , second = 1;
	if(n>=0) cout<<first<<" ";
	if(n>=1) cout<<second<<" ";
	int next = first + second;
	while(next <= n){
		cout<<next<<" ";
		first = second ;
		second = next ;
		next = first + second;
	}
}
int main(){
	int num;
	cout<<" Enter any number ";
	cin>>num;
  	
   cout<<" The fabnoacci series of = "<< num <<" is "<< endl;	
 	fibonaci(num);
	
	
	return 0;
}

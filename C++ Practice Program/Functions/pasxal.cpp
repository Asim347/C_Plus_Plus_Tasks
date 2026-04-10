#include<iostream>
using namespace std;
int fact(int x){
	int f = 1;
	for(int i = 1; i<=x; i++){
		f *=i;
	}
	return f;
}
int combination(int x , int r){
	int ncr = fact(x)/(fact(r) * fact(x-r));
	return ncr;
}
int main(){
    
   int num ;
   cout<<"Enter any number ";
   cin>>num;
   for(int i = 0; i<=num; i++){
   	for(int j = 0; j<=i; j++){
   		cout<<combination(i,j)<<" ";
	   }
	   cout<<endl;
   }
   
   
   //METHOD 2
//   for(int i = 0; i<=num; i++){
//   	int current = 1;
//   	for(int j = 0; j<=i; j++){
//   	  cout<<current<<" ";
//   	   current = current*(i-j)/(j+1);
//   }
//   cout<<endl;
//}
   
	return 0;
}
 

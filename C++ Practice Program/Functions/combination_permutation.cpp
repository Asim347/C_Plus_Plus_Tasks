#include<iostream>
using namespace std;
int fact(int x){
	int f = 1;
	for(int i = 2; i<=x; i++){
		f  *= i;
	}
	return f;
}
int main(){
	int n;
	cout<<"ENter n ";
	cin>>n;
	
	int r;
	cout<<"ENter r ";
	cin>>r;
	 
	int nfact = fact(n);
	int rfact = fact(r);
	int nrfact = fact(n-r);
	int ncr = nfact/(rfact * nrfact);
	cout<<"Combination of "<<n <<" and "<< r <<" is "<< ncr <<endl;
	// METHOD 1
//	int nfact = 1;
//	for(int i = 2; i<=n; i++){
//		nfact *= i;
//	}
//	cout<<"The factorial of N is "<<nfact<<endl;
//	
//	
//	int rfact = 1;
//	for(int i = 2; i<=r; i++){
//		rfact *= i;
//	}
//	cout<<"The factorial of R is "<<rfact<<endl;
//	
//	int nrfact = 1;  //(n-r)!
//	for(int i = 2; i<=n-r; i++){
//		nrfact *= i;
//	}
//	cout<<"The factorial of NR is "<<nrfact<<endl;
//	
//	
//	int combination = nfact/(rfact * nrfact);
//	cout<<"The combination is : "<<combination<<endl;
	
	return 0;
}

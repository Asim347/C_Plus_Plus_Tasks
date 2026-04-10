#include<iostream>
using namespace std;
int main(){
	cout<<"                    Part A "<<endl;
	cout<<"-------------------------------------------------"<<endl;
	const int size = 15;
	int arr[size] = {10, 5, 15, 20, 45, 2, 3, 1, 6, 33, 45, 88, 55 ,50, 51};
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
		cout<<"                    Part B "<<endl;
	cout<<"-------------------------------------------------"<<endl;
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<endl;
	}
		cout<<"                    Part C "<<endl;
	cout<<"-------------------------------------------------"<<endl;
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
		if((i+1)%5==0) cout<<endl;
	}
		cout<<"                    Part D "<<endl;
	cout<<"-------------------------------------------------"<<endl;
	for(int i = size-1; i>0; i--){
		cout<<arr[i]<<" ";	
		
}
		
	return 0;
}

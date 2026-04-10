#include<iostream>
using namespace std;
int main(){

	const int size = 15;
	int arr[size] = {10, 5, 15, 20, 45, 2, 3, 1, 6, 33, 45, 88, 55 ,50, 51};

	for(int i = 0; i<size; i++){
		if(i%2==0) {
			cout<<arr[i]<<" ";
		}
	}
     cout<<endl<<endl;
	for(int i = 0; i<size; i++){
		if(i%2!=0) {
			cout<<arr[i]<<" ";
		}
	}
	cout<<endl<<endl;
	
	
	for(int i = size-1; i>0; i--){
		if(i%2==0) {
			cout<<arr[i]<<" ";
		}
	}
	cout<<endl<<endl;
	

	for(int i = size-1; i>0; i--){
		if(i%2!=0) {
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}

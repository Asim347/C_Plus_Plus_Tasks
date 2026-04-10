#include<iostream>
using namespace std;
int main(){
	cout<<"Enter no of rows and colums "<<endl;
	int arr[2][3];
	for(int i = 0; i<2; i++){
		for (int j = 0 ; j<3; j++){
			cin>>arr[i][j];
		}
	}
	for(int i = 0; i<3; i++){
		for (int j = 0 ; j<2; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

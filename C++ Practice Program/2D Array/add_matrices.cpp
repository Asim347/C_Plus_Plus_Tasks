#include<iostream>
using namespace std;
int main(){
	// for adding matrices must have same order like 2*2 correct 2*3 not correct
	cout<<"First method "<<endl;
cout<<"-----------------------------------------"<<endl;
	    int brr[2][3] = {12,64,23,87,43,23};
		int arr[2][3] = {21,52,37,44,32,12};
		int res[2][3];
		for(int i = 0; i<2; i++){
		for (int j = 0 ; j<3; j++){
			res[i][j] = brr[i][j] + arr[i][j];
		}
	}
	for(int i = 0; i<2; i++){
		for (int j = 0 ; j<3; j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"-----------------------------------------"<<endl;
       cout<<"Second method "<<endl;
	for(int i = 0; i<2; i++){
		for (int j = 0 ; j<3; j++){
			cout<< brr[i][j] + arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"-----------------------------------------"<<endl;
	cout<<"Third method "<<endl;
	for(int i = 0; i<2; i++){
		for (int j = 0 ; j<3; j++){
			brr[i][j] =  brr[i][j] + arr[i][j];
		}
	}
	for(int i = 0; i<2; i++){
		for (int j = 0 ; j<3; j++){
			cout<<brr[i][j]<<" "; 
		}
		cout<<endl;
	}
	return 0;
}


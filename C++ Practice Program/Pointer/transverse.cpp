#include<iostream>
using namespace std;
int main(){
	
	int arr[5] = {1,2,3,4,5};
	int* ptr = arr;
	int sum = 0;
	for(int i = 0; i<5; i++){
		cout<<*(arr + i)<<" ";
    sum = sum +(*ptr + i);
	}
	cout<<endl;
	cout<<"The sum of array is "<<sum ;
	return 0;
}

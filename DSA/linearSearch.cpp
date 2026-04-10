#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){
	for(int i = 0; i<size; i++){
		if(arr[i] == target){
			return i;
		}
	}
	return -1;
}
int main(){
	
	int target = 5;
    int arr[10] = {1,2,3,4,5,66,5,3,44,24};
    cout<<"Our value is found at index "<<linearSearch(arr, 10, target)<<endl;
    int tar = 90;
    cout<<"Our value is found at index "<<linearSearch(arr, 10, tar)<<endl;
	 
	return 0;
}

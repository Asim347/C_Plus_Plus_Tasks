#include<iostream>
using namespace std;
int findmax(int* arr, int size){
	int temp = *arr;
	for(int i = 1; i < size; i++){
		if(*(arr + i) > temp){
		temp = *(arr + i);
      }
	}
	return temp;
}

void reverse(int* arr, int size){
	for(int i = 0; i < size/2; i++){
		int temp = *(arr + i);
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size -1 -i) = temp;
    }
}

int occurance(int* arr, int size, int target){
	int choice = 0;
	for(int i = 0; i< size; i++){
		if(*(arr + i) == target){
			choice++;
		}
	}
	return choice;
}

void copy(int* first, int* last, int size){
	for(int i = 0; i < size; i++){
		*(last + i) = *(first + i);
 	}
}
int main(){
	int arr[6] = {5,2,8,1,9,3};
	
	cout<<"Maximum value : "<<findmax(arr, 6)<<endl;
	
	reverse(arr, 6); 
    cout<<"Reverse :";
     for (int i = 0; i < 6; i++) cout << *(arr + i) << " ";
    cout << endl;
    
    cout<<"Number of occurance : "<<occurance(arr, 6, 3)<<endl;
    
    int coppy[6];
    copy(arr, coppy , 6);
    cout<<"Copied : ";
    for (int i = 0; i < 6; i++) cout << *(coppy + i) << " ";
    cout << endl;
	return 0;
}

 #include<iostream>
 using namespace std;
 int main()
 {	 
const int size = 5;
int arr[size] = {1,2,3,4,5};
int arr2[3]   = {6,7,8};

int size1 = sizeof(arr)/sizeof (arr[0]);
int size2 = sizeof(arr2)/sizeof(arr2[0]);
int size3 = size1 + size2;

int arr3[size3];
for(int i = 0; i<size1; i++){
	arr3[i] =arr[i];
}
for(int i = 0; i<size2; i++){
	arr3[size1 + i] =arr2[i];
}
for(int i = 0; i<size3; i++){
	cout<<arr3[i]<<" ";
}
    return 0;
}

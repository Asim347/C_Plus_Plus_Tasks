 #include<iostream>
 using namespace std;
 int main()
 {
    const int size = 15;
	int arr[size] = {10, 5, 15, 20, 45, 2, 3, 1, 6, 33, 45, 88, 55 ,50, 51};
int copy[size]; 
cout<<"Original array is: ";
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
	cout<<"Copied  array is : ";
    for (int i = 0; i < size; i++) {
        copy[i] = arr[i]; 
    }
    for (int i = 0; i < size; i++) {
        cout << copy[i] << " "; 
    }
    cout << endl;
    
    return 0;
}

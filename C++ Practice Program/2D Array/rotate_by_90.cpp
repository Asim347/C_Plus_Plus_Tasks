#include<iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter number of rows: ";
    cin >> m;
    
    int arr[m][m];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < m; i++) {  
        for (int j = 0; j < m; j++) {  
            cin >> arr[i][j];
        }
    }
    cout << "The array is:" << endl;
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < m; j++) {  
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  cout<<"Swapping array is "<<endl;
for (int i = 0; i < m; i++) { 
        for (int j = i+1; j < m; j++) {  
            int temp  = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < m; j++) {  
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"The reverse of transpose matrix is"<<endl;
    for(int k = 0; k< m; k++){
	
     int i = 0;
     int j = m-1;
     while(i<=j){
     	int tempo = arr[k][i];
     	arr[k][i] = arr[k][j];
     	arr[k][j] = tempo;
     	i++;
     	j--;
	 }
}
for (int i = 0; i < m; i++) { 
        for (int j = 0; j < m; j++) {  
            cout << arr[i][j] << " ";
        }
        cout << endl;
}
    return 0;
}


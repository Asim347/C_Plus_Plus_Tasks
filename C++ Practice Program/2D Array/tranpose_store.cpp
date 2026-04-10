#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    int arr[m][n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < m; i++) {  
        for (int j = 0; j < n; j++) {  
            cin >> arr[i][j];
        }
    }

    cout << "The array is:" << endl;
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) {  
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  cout<<endl;
  cout<<"Transpose array is "<<endl;
  int t[m][n];
for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) {  
            t[i][j] = arr[j][i];
        }
    }
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < n; j++) {  
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num;
    char choice;
    
    cout << "Enter any positive integer: ";
    cin >> num;
    
    cout << "Enter O or o for odd and E or e for even: ";
    cin >> choice;
    
    if (choice == 'O' || choice == 'o') {
    
        for (int i = 1 ; i <= num ; i++) {
        	if (i%2 != 0)
            cout << "Odd number: " << i << endl;
        }
    } 
    else if (choice == 'E' || choice == 'e') {
        
        for (int i = 1; i <= num ; i++) {
        	if (i % 2 == 0)
            cout << "Even number: " << i << endl;
        }
    } 
    else {
        cout << "Invalid choice! Please enter O or E" << endl;
    }
    
    return 0;
}


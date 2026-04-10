#include <iostream>
using namespace std;

int main() {
    int num, rNum = 0, digitCount = 0;
    
    cout << "Enter any positive number: ";
    cin >> num;

    int originalNum = num; 

    
    for (int temp = num; temp != 0; temp /= 10) {
        digitCount++;
    }

    
    for (int i = 0; i < digitCount; i++) {
        int lastDigit = num % 10;           
        rNum = rNum * 10 + lastDigit;       
        num /= 10;                           
    }

    cout << "Original number: " << originalNum << endl; 
    cout << "Reversed number: " << rNum << endl;

    return 0;
}


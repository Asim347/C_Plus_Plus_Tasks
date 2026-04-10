#include <iostream>
using namespace std;

int main() {
    double number;         
    double maxNumber = -1; 

    cout << "Enter numbers to track the maximum (enter -1 to stop):" << endl;

    
    while (true) {
        cout << "Enter a number: ";
        cin >> number;

        if (number == -1) {
            break;
        }
        if (number > maxNumber) {
            maxNumber = number;
        }
    }
    if (maxNumber != -1) {
        cout << "The maximum number entered is: " << maxNumber << endl;
    } else {
        cout << "No valid numbers were entered." << endl;
    }

    return 0;
}


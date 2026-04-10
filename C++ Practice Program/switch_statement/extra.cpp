#include <iostream>
using namespace std;

int main() {
    int choice;          
    double num1, num2;  
    
    cout << "\nMenu:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";

    while (true) { // Infinite loop
        cout << "Enter your choice (1-5): ";
        cin >> choice;  // Read user choice

        // If the user chooses to exit, break the loop
        if (choice == 5) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;  // Exit the loop
        }

        // Prompt for two numbers for the calculations
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;  // Read the two numbers

        // Perform the selected operation
        switch (choice) {
            case 1: // Addition
                cout << "Result: " << (num1 + num2) << endl;
                break;
            case 2: // Subtraction
                cout << "Result: " << (num1 - num2) << endl;
                break;
            case 3: // Multiplication
                cout << "Result: " << (num1 * num2) << endl;
                break;
            case 4: // Division
                if (num2 != 0) {
                    cout << "Result: " << (num1 / num2) << endl; // Check for division by zero
                } else {
                    cout << "Error: Division by zero is not allowed!" << endl; // Handle division by zero
                }
                break;
            default:
                cout << "Invalid choice! Please try again." << endl; 
                break;
        }
    }

    return 0; // Exit the program
}


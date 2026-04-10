#include <iostream>
#include <string>
using namespace std;

int main() {
    int birthyear[10] = {2001, 2002, 2001, 2003, 2001, 2004, 2003, 2003, 2005, 2000};
    int roll[10] = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    int marks[10] = {850, 900, 870, 890, 705, 876, 950, 650, 800, 700};
    string names[10] = {"Ali", "Sara", "Kashif", "Mehran", "Kamran", "Gul", "Mehak", "Sadaf", "Zia", "Sameer"};

    int year = 2024;

    for (int i = 0; i < 10; i++) { // Loop through all 10 students
        int age = year - birthyear[i];
        double percentage = (double)marks[i] / 1000 * 100;
        char grade;
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else
            grade = 'F';

        cout << "Student Roll No : " << roll[i] << endl;
        cout << "Student Name    : " << names[i] << endl;
        cout << "Age             : " << age << " years" << endl;
        cout << "Obtained Marks  : " << marks[i] << endl;
        cout << "Percentage      : " << percentage << " %" << endl;
        cout << "Grade           : " << grade << endl;
        cout << "---------------------------------------" << endl;
    }

    return 0;
}


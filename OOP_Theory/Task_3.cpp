#include <iostream>
#include <string>
using namespace std;

class Day {
private:
    string days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    int currentIndex;

    int getIndex(const string& day) {
        for (int i = 0; i < 7; i++) {
            if (days[i] == day)
                return i;
        }
        return -1; // Invalid day
    }

public:
    // Constructor with optional default value
    Day(string day = "Sun") {
        int index = getIndex(day);
        currentIndex = (index != -1) ? index : 0;
    }

    void setDay(string day) {
        int index = getIndex(day);
        if (index != -1) {
            currentIndex = index;
        } else {
            cout << "Invalid day!" << endl;
        }
    }

    void printDay() {
        cout << "Today is: " << days[currentIndex] << endl;
    }

    string getDay() {
        return days[currentIndex];
    }

    string nextDay() {
        return days[(currentIndex + 1) % 7];
    }

    string previousDay() {
        return days[(currentIndex + 6) % 7]; // (index - 1 + 7) % 7
    }

    string addDays(int n) {
        return days[(currentIndex + n) % 7];
    }
};

int main() {
    Day today("Tue");

    today.printDay();                                // Today is: Tue
    cout << "Next Day: " << today.nextDay() << endl; // Wed
    cout << "Previous Day: " << today.previousDay() << endl; // Mon
    cout << "After 4 days: " << today.addDays(4) << endl; // Sat
    cout << "After 13 days: " << today.addDays(13) << endl; // Mon

    today.setDay("Fri");
    today.printDay(); // Today is: Fri

    today.setDay("Funday"); // Invalid day!

    return 0;
}


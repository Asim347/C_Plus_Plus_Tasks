#include <iostream>
#include <string>
using namespace std;

class Day {
private:
    int dayIndex;  // 0 = Sun, 1 = Mon, ..., 6 = Sat
    string dayNames[7] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

public:
    Day() {
        dayIndex = 0; // default Sunday
    }

    void setDay(const string& day) {
        for (int i = 0; i < 7; ++i) {
            if (dayNames[i] == day) {
                dayIndex = i;
                return;
            }
        }
        cout << "Invalid day!\n";
    }

    void printDay() {
        cout << "Current Day: " << dayNames[dayIndex] << endl;
    }

    string getDay() {
        return dayNames[dayIndex];
    }

    string getNextDay() {
        return dayNames[(dayIndex + 1) % 7];
    }

    string getPreviousDay() {
        return dayNames[(dayIndex - 1 + 7) % 7];
    }

    string addDays(int n) {
        return dayNames[(dayIndex + n) % 7];
    }
};

int main() {
    Day d;
    d.setDay("Mon");
    d.printDay();                           // Mon
    cout << "Next Day: " << d.getNextDay() << endl;           // Tue
    cout << "Previous Day: " << d.getPreviousDay() << endl;   // Sun
    cout << "Add 4 Days: " << d.addDays(4) << endl;           // Fri
    cout << "Add 13 Days: " << d.addDays(13) << endl;         // Mon
    return 0;
}


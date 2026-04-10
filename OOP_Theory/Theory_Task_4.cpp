#include <iostream>
using namespace std;

class Time {
    int hour, minute, second;

public:
    Time(int s = 0, int m = 0, int h = 0) {
        second = s;
        minute = m;
        hour = h;
    }

    // Addition operator overloading
    Time operator+(const Time& t) {
        Time result;
        result.second = second + t.second;
        result.minute = minute + t.minute + result.second / 60;
        result.second = result.second % 60;
        result.hour = hour + t.hour + result.minute / 60;
        result.minute = result.minute % 60;
        result.hour = result.hour % 24; // Keep in 24-hour format
        return result;
    }

    // Subtraction operator overloading
    Time operator-(const Time& t) {
        Time result;
        int total1 = hour * 3600 + minute * 60 + second;
        int total2 = t.hour * 3600 + t.minute * 60 + t.second;
        int diff = total1 - total2;

        if (diff < 0) diff = -diff; // Optional: take absolute difference

        result.hour = diff / 3600;
        diff %= 3600;
        result.minute = diff / 60;
        result.second = diff % 60;

        return result;
    }

    void print() {
        cout << hour << "h " << minute << "m " << second << "s" << endl;
    }
};

int main() {
    Time time1(10, 11, 22);  // 22 sec, 11 min, 10 hour
    Time time2(30, 12, 11);  // 30 sec, 12 min, 11 hour

    Time resultAdd = time1 + time2;
    cout << "Addition: ";
    resultAdd.print();

    Time resultSub = time1 - time2;
    cout << "Subtraction: ";
    resultSub.print();

    return 0;
}


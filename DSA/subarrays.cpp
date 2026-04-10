#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int marks[5] = {1, 2, 3, 4, 5};

    // Generating all subarrays and printing them in a clean way
    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) { // corrected end to start from st
            // print subarray from index st to end
            for (int i = st; i <= end; i++) {
                cout << marks[i] << " ";
            }
            cout << endl; // print each subarray on a new line
        }
    }

    return 0;
}


#include <iostream>
#include <climits>
using namespace std;

int maxSubArray(int arr[], int n) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        if (currSum > maxSum) {
            maxSum = currSum;
        }
        if (currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {1, 2, -3, 4, 5, -2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum subarray sum is " << maxSubArray(arr, n) << endl;

    return 0;
}


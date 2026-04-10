#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int marks[n] = {3,-4,5,4,-1,7,-8};
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++) {
    	int currentSum = 0; 
        for (int end = st; end < n; end++) { 
        currentSum += marks[end];
        maxSum = max(currentSum , maxSum);
    }
}
  cout<<"Sum of array is "<<maxSum<<endl;
    

    return 0;
}


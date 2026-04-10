#include <iostream>
using namespace std;

int main() {
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
    int squ[4] = {1,2,3,4};
    for(int i=0; i<4; i++){
    	squ[i]= i * i;
	}
	for(int i=0; i<4; i++){
		cout<<squ[i]<<" ";
	}
    cout<<endl;
    return 0;
}


#include<iostream>
using namespace std;
int main(){
	
	int num , countdigit = 0;
	cout<<" Enter any positve number ";
	cin>>num;
	
	for (int a = num; a > 0 ; a /= 10){
		countdigit++;
	}
	cout << "Total digits are: " << countdigit << endl;

return 0;
}

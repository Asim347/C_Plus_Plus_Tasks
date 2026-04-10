#include<iostream>
using namespace std;
int rnum(int rN, int lastdigit ,int num){
	while (num != 0){
	
    lastdigit = num % 10;
    num = num / 10;
    rN = rN * 10 + lastdigit;
}
    return rN;

}

int main(){
cout<<rnum(0,0,4583);
	return 0;
}

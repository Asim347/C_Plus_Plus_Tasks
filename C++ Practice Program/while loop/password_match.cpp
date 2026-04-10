#include<iostream>
using namespace std;
int main(){
    char password ='asim12' ; 
    char match;
    cout<<" Enter password to log in ";
    cin>>match;
    while ( password != match ){
    	cin>>match;
	} cout<<" you match it"<<endl;


return 0;
}

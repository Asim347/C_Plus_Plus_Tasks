#include<iostream>
using namespace std;
int main()
{
	double principal = 200000;
    int rate      = 10;
    int time      = 5;
    double simple_interest ;
    
    cout<<" simple principal amount "<<     principal <<  " PKR"<<endl;
    cout<<" Annual Interest Rate    " <<    rate <<"    % "<<endl;
    cout<<" Time        " << time <<       "  years " <<endl;
    
    
    simple_interest = principal * rate * time;
    
    
    
    
    cout<<" Simple interest: " << simple_interest << " PKR" <<endl;
    
    
	
	
	return 0;
}

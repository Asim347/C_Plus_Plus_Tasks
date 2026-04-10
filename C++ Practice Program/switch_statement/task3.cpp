#include<iostream>
using namespace std;
int main(){
	
	double a , b;
	char op;
	float result;
	cout<<" Enter first value  ";
	cin>>a;
	cout<<" Enter second value  ";
	cin>>b;
	
	cout<<" Enter an operator ( +, -, *, / ) ";
	cin>>op;
	
	if ( op == '+'){
	    result = a + b;
	    cout<< a <<" + " << b << " = " << result<<endl;
    }
    else if ( op == '-'){
	    result = a - b;
	    cout<< a <<" - " << b << " = " << result<<endl;
       }
	else if ( op == '*'){
	    result = a * b;
	    cout<< a <<" * " << b << " = " << result<<endl;
	}
    else if ( op == '/'){
	    result = a / b;
	    cout<< a <<" / " << b << " = " << result<<endl;    
}
	else {
		cout<<" ERROR !"<<endl;
		cout<<" Invalid operator"<<endl;
	}
	
	return 0;
}

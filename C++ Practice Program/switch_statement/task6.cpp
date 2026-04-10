#include<iostream>
using namespace std;
int main(){
	double  marks, attendence;
	char grade ;
	cout<<" enter your marks      :";
	cin>>marks;
	cout<<" enter your attendence :";
	cin>>attendence;
	 
	    if (marks >=90 && marks <=100)
	    grade = 'A';
	    
        if (marks >=80 && marks <=89)
	    grade = 'B';
	
        if (marks >=70 && marks <=79)
	    grade = 'C';	
	    
    	if (marks >=60 && marks <=69)
	    grade = 'D';
	    
    	if (marks >=90 && marks <=100)
	    grade = 'A';
	
	    if (marks <60)
	    grade = 'F';
	    
	    cout<<" your grade is "<< grade<<endl;
	    
	if(grade=='A'&& attendence >=75 ){
		cout<<" You are awarded with full scholarship "<<endl;
	} else if ( grade == 'B' && attendence >=70){
		cout<<" You are awarded with half scholarship "<<endl;
	} else {
		cout<<" You are not eligible for scholarship "<<endl;
	}
	    
	    
	return 0;
}

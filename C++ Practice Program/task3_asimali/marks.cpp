#include<iostream>
using namespace std;
int main()
{
	
	int obt_marks_english = 50;
		int obt_marks_urdu = 80;
	    	int obt_marks_science = 90;
	 
	int tot_marks1 = 100;
	   	int tot_marks2 = 100  ;
	   	  	int tot_marks3 = 100  ;
	double sum;  int total;
	float avg; 
	double percentage;
	
	sum = obt_marks_english + obt_marks_urdu + obt_marks_science;
	cout<<" Obtained marks :  "<< sum << endl;
	
	
	total = tot_marks1 + tot_marks2 + tot_marks3;
	cout<< " Total marks    :  "<<total << endl;
	
	avg = sum/3;
	cout<<" average marks  :  "<<avg<<endl;
	
	
	percentage = (sum/total)*100;
	cout<<" Percentage     : "<<percentage<<endl;
	
	
	
	
    
	
	
	return 0;
}

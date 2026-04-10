#include<iostream>
using namespace std;  
int main(){
  int grade;
  
  cout<<" Enter a numeric grade ( 1- 100) ";
  cin>>grade;
  switch (grade/10){
  	case 10:
  	case 9:	
  		cout<<"marks between 90 and 100"<<endl;
  		cout<<" Grade A";
  		break;
  		
  	case 8:	
  		cout<<"marks between 80 and 89"<<endl;
  		cout<<" Grade B";
  		break;	
	  	
  	
  	case 7:
  		cout<<"marks between 70 and 79"<<endl;
  		cout<<" Grade C";
  		break;
  	
  	case 6:	
  		cout<<"marks between 60 and 69"<<endl;
  		cout<<" Grade D";
  		break;
  	
  	case 5:
  	case 4:
	case 3:
	case 2:
	case 1:	 
  		cout<<" Grade E";
  		break;
  	
  	default :
  		cout<<" Invalid Numbers";
  } 





	
	
	return 0;
}


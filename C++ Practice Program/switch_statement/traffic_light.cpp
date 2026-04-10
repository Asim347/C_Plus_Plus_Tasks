#include<iostream>
using namespace std;
int main(){
  char  action;
  
//  cout<<"  red is for stop (r)     "<<endl;
//  cout<<"  green is for go (g)    "<<endl;
//  cout<<"  yellow is for slow down (y)  "<<endl;	
  cout<<" which action is perform  ";
  cin>>action;
  
  switch (action){
  	case 'r':
  		cout<<" stop";
  		break;
  	case 'y':
  		cout<<" slow down";
  		break;	
  	
  	case 'g':
  		cout<<" go";
  		break;
  	 
  	 default : 
  	 cout<<" Invalid action plz enter 'r', 'y', 'g' "<<endl;
  }	

	
	
	return 0;
}

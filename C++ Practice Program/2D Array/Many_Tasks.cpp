#include<iostream>
using namespace std;
int main(){
int arr[10][10] =
{
{12, 34, 56, 78, 90, 12, 34, 56, 78, 90},
{23, 45, 67, 89, 23, 45, 67, 89, 23, 45},
{34, 56, 78, 90, 34, 56, 78, 90, 34, 56},
{45, 67, 89, 23, 45, 67, 89, 23, 45, 67},
{56, 78, 90, 12, 56, 78, 90, 12, 56, 78},
{67, 89, 23, 45, 67, 89, 23, 45, 67, 89},
{78, 90, 12, 34, 78, 90, 12, 34, 78, 90},
{89, 23, 45, 67, 89, 23, 45, 67, 89, 23},
{90, 12, 34, 56, 90, 12, 34, 56, 90, 12},
{12, 34, 56, 78, 12, 34, 56, 78, 12, 34}
};

 cout<<"Display all elements "<<endl;
 
 for(int i = 0; i < 10; i++){
 	for(int j = 0; j < 10; j++){
 		cout<<arr[i][j]<<" ";
	 }
	 cout<<endl;
 }
  cout<<endl;
  cout<<"The sum and average of this array "<<endl;
  int sum;
  int  total_elements = 100;

 for(int i = 0; i < 10; i++){
 	for(int j = 0; j < 10; j++){
 		sum += arr[i][j];
	 }
 }
  cout<<"SUM     : "<<sum<<endl<<endl;
  double average = sum/static_cast<double>(total_elements);
  cout<<"AVERAGE : "<<average<<endl;
  
  cout<<"Left diagnol is               :"<<endl;
  for(int i = 0; i < 10; i++){
 	cout<<arr[i][i]<<" ";
 }
  cout<<endl<<endl;
  cout<<"Left diagnol in reverse order :"<<endl;
  for(int i = 9; i >= 0; i--){
 	cout<<arr[i][i]<<" ";
 }
  cout<<endl<<endl;
 
  cout<<"Right diagnol is :"<<endl;
  for(int i = 0; i < 10; i++){
 	cout<<arr[i][9-i]<<" ";
 }
  
  cout<<endl<<endl;
  cout<<"Right diagnol in reverse order :"<<endl;
  for(int i = 9; i >= 0; i--){
 	cout<<arr[i][9-i]<<" ";
 }
  
  cout<<endl<<endl;
  cout<<"Whole array in reverse order "<<endl;
  for(int i = 9; i >= 0; i--){
 	for(int j = 9; j >= 0; j--){
 		cout<<arr[i][j]<<" ";
	 }
	 cout<<endl;
 }
 int colsum = 0;
  cout<<endl<<endl;
  cout<<"7 column elements and their sum "<<endl;
  for(int i = 0; i < 10; i++){
 		cout<< arr[i][6]<<" ";
 		colsum += arr[i][6];
 }
 cout<<endl;
 cout<<"The sum is : "<<colsum<<endl;
 
 
 int rowsum = 0;
  cout<<endl<<endl;
  cout<<"3 row elements and their sum "<<endl;
  for(int j = 0; j < 10; j++){
 		cout<< arr[2][j]<<" ";
 		rowsum += arr[2][j];
 }
 cout<<endl;
 cout<<"The sum is : "<<rowsum<<endl;
 
 cout<<endl<<endl;
 int max = arr[0][0];
 for(int i = 0; i < 10; i++){
 	for(int j = 0; j < 10; j++){
 		if(max<arr[i][j]) max = arr[i][j];
	 }
 }
 cout<<"The largest value in array is : "<<max<<endl;
 
 cout<<endl<<endl;
 int min = arr[0][0];
 for(int i = 0; i < 10; i++){
 	for(int j = 0; j < 10; j++){
 		if(min>arr[i][j]) min = arr[i][j];
	 }
 }
 cout<<"The smallest value in array is : "<<min<<endl;
 
 int occurs = 0 , target;
 cout<<"Enter a number to check it's occurence ";
 cin>>target;
 for(int i = 0; i < 10; i++){
 	for(int j = 0; j < 10; j++){
 		if(arr[i][j] == target)
		 occurs++;
	 }
 }
 cout<<"The number "<<target<<" is repeated " <<occurs<<" times"<<endl;
 
 cout<<endl<<endl;
 int position;
 cout<<"Enter a number to find its position ";
 cin>>position;
 for(int i = 0; i < 10; i++){
 	for(int j = 0; j < 10; j++){
 		if(arr[i][j] == position) {
 			cout<<"Row " <<i+1 <<" , " <<" Column "<< j+1 <<endl;
		 }
	 }
 }
 
 cout<<endl<<endl;
 int specific;
 cout<<"Enter a number ";
 cin>>specific;
 bool found = false;
 for(int i = 0; i < 10; i++){
 	for(int j = 0; j < 10; j++){
 		if(arr[i][j] == specific) {
		 found = true;
    	}
	 }
 }
 if(found){
 	cout<<"Number is present "<<endl;
 } else {
 	cout<<"Number is not present "<<endl;
 }
 cout<<endl<<endl;
 cout<<"Reverse the whole array elements "<<endl;
 int i = 0;
 for(int i = 0; i < 10; i++){
 	for(int j = i+1; j < 10; j++){
 		int temp  = arr[i][j];
 		arr[i][j] = arr[j][i];
 		arr[j][i] = temp;
 		
 	 }
 }
 
 for(int i = 0; i < 10; i++){
 	for(int j = 0; j < 10; j++){
 		cout<<arr[i][j]<<" ";
	 }
	 cout<<endl;
 }
 

 
return 0;
}

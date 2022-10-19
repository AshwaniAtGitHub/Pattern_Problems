/*
	To print the following pattern
	12345
	 2345
	  345
	   45
	    5
*/

#include<iostream>
using namespace std;
int main(){
	int n,row=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	while(row<=n){
//	spaces		
	int space=row-1;
	while(space){
		cout<<" ";
		space--;
	}
//		stars

for (int col=row; col<=n; col++){
	cout<<col;
}
		
	cout<< endl;
	row++;
	}
}

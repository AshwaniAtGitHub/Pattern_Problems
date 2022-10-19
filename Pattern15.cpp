/*
	To print the following pattern using while loop
	    *
	   **
	  ***
	 ****
	*****
*/

#include<iostream>
using namespace std;
int main(){
	int n,row=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	while(row<=n){
		//Spaces
		int space = n-row;
		while(space){
			cout<<" ";
			space--;
		}
		//stars
		int col=1;
		while(col<=row){
			cout<<"*";
			col++;
		}
	row++;
	cout<<endl;
	}
}

/*
	To print the following pattern using for loop
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
		for(int i=1;i<=n-row; i++){
			cout<<" ";
		}
		
		//stars
		for(int i = 1; i<=row; i++){
			cout<<"*";
		}

	row++;
	cout<<endl;
	}
}

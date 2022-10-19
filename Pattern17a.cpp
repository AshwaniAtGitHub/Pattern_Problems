/*
	To print the following pattern
	*****
	 ****
	  ***
	   **
	    *
*/

#include<iostream>
using namespace std;
int main(){
	int n,row=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	while(row<=n){ 
		for (int i=1; i<=row-1; i++){
			cout<<" ";
		}

		for(int i=1; i<=n-row+1; i++){
			cout<<"*";
		}
	cout<< endl;
	row++;
	}
}

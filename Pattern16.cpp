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
		//stars
		int col=1;
		while(col<=n-row+1){
			cout<<"*";
			col++;
		}
	row++;
	cout<<endl;
	}
}

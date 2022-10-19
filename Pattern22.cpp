/*
	To print the following pattern
	    1
	   121
	  12321
	 1234321
	123454321    
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
		//numbers
		int col=1;
		while(col<=row){
			cout<<col;
			col++;
		}
		int start = row-1;
		while (start){
			cout<<start;
			start--;
		}
	row++;
	cout<<endl;
	}
}

/*
	To print the following pattern
	    1
	   23
	  456
	 78910      
*/

#include<iostream>
using namespace std;
int main(){
	int n,row=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int value=1;
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
			cout<<value;
			value++;
			col++;
		}
	row++;
	cout<<endl;
	}
}

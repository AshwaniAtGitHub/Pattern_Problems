/*
	To print the following pattern
	    1
	   22
	  333
	 4444
*/

#include<iostream>
using namespace std;
int main(){
	int n,row=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	while(row<=n){
//	spaces		
	int space=n-row;
	while(space){
		cout<<" ";
		space--;
	}
//		numbers
		int col=1;
		while(col<=row){
			cout<<row;
			col++;
		}
	cout<< endl;
	row++;
	}
}

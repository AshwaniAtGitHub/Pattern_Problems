/*
	To print the following pattern
	1111
	 222
	  33
	   4
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
		int col=1;
		while(col<=n-row+1){
			cout<<row;
			col++;
		}
	cout<< endl;
	row++;
	}
}

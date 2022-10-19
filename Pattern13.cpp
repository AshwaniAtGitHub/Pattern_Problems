/*
	To print the following pattern
	A
	BC
	DEF
	GHIJ
*/

#include<iostream>
using namespace std;
int main(){
	int n,row=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	while(row<=n){
		int col=1;
		while(col<=row){
			char pattern= 'A' + row + col - 2;
			cout<< pattern;
		col++;
		}
	row++;
	cout<<endl;
	}
}

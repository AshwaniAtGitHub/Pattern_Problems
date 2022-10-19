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
	char pattern = 'A';
	while(row<=n){
		int col=1;
		while(col<=row){
			cout<< pattern;
		col++;
		pattern=pattern+1;
		}
	row++;
	cout<<endl;
	}
}

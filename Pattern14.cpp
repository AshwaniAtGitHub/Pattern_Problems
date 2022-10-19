/*
	To print the following pattern
	D
	CD
	BCD
	ABCD
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
			char pattern= 'A' + n - row + col - 1;
			cout<< pattern;
		col++;
		}
	row++;
	cout<<endl;
	}
}

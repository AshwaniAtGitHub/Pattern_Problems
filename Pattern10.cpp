/*
	To print the following pattern
	ABC
	BCD
	CDE
*/

#include<iostream>
using namespace std;
int main(){
	int n,row=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
//	char value='A';
	while(row<=n){
		int col=1;
		while(col<=n){
			char pattern= 'A'+row+col-2;
			cout<< pattern;
		col++;
		}
	row++;
	cout<<endl;
	}
}

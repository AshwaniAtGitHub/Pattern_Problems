/*
	To print the following pattern
	ABC
	DEF
	GHI
*/

#include<iostream>
using namespace std;
int main(){
	int n,row=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	char pattern='A';
	while(row<=n){
		int col=1;
		while(col<=n){
			cout<< pattern;
			pattern=pattern+1;
		col++;
		}
	row++;
	cout<<endl;
	}
}

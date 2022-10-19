/*
	To print the following pattern
	ABC
	ABC
	ABC
*/

#include<iostream>
using namespace std;
int main(){
	int n,row=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	while(row<=n){
		int col=1;
		while(col<=n){
			char pattern='A'+ col-1;
			cout<< pattern;
		col++;
		}
	row++;
	cout<<endl;
	}
}

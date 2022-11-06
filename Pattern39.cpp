/*
	To print the following pattern
	EEEEE
	DDDDD
	CCCCC
	BBBBB
	AAAAA
*/

#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	char pattern='A'+n-1;
	while(i<=n){
		int j=1;
		while(j<=n){
		cout<<pattern;
		j++;
		}
	pattern=pattern-1;	
	i++;
	cout<<endl;
	}
}

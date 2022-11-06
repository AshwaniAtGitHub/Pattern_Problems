/*
	To print the following pattern
	EDCBA
	EDCBA
	EDCBA
	EDCBA
	EDCBA
*/

#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	while(i<=n){
		char pattern='A'+n-1;
		int j=1;
		while(j<=n){
		cout<<pattern;
		pattern=pattern-1;	
		j++;
		}
	i++;
	cout<<endl;
	}
}

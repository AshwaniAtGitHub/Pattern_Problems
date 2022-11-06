/*
	To print the following pattern
	ABCDE
	BCDEF
	CDEFG
	DEFGH
	EFGHI
*/

#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	while(i<=n){
		char pattern='A'+i-1;
		int j=1;
		while(j<=n){
			cout<<pattern;
			pattern=pattern+1;
		j++;
		}
	i++;
	cout<<endl;
	}
}

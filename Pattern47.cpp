//	To print the following pattern
//	5
//	4 4
//	3 3 3
//	2 2 2 2
//	1 1 1 1 1

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<n+1-i<<" ";
		}
		cout<<endl;
	}
}

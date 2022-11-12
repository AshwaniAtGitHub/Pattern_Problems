//	To print the following pattern
//	5
//	5 4
//	5 4 3
//	5 4 3 2
//	5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<n+1-j<<" ";
		}
		cout<<endl;
	}
}

//	To print the following pattern
//	5
//	4 5
//	3 4 5
//	2 3 4 5
//	1 2 3 4 5

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	for (int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<n-i+j<<" ";
		}
		cout<<endl;
	}
}

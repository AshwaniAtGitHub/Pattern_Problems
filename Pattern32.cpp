//	To print the following pattern
//	0 1 0 1 0
//	1 0 1 0 1
//	0 1 0 1 0
//	1 0 1 0 1
//	0 1 0 1 0

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	int x=0;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<(i+j)%2<<" ";
		}
		cout<<endl;		
	}
}

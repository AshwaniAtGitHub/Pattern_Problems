//	To print the following pattern
//	1 0 1 0 1
//	0 0 0 0 0
//	1 0 1 0 1
//	0 0 0 0 0
//	1 0 1 0 1

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	int x=0;

	for(int i=1; i<=n; i+=2){
		for(int j=0; j<n; j++){
			cout<<(i+j)%2<<" ";
		}
		if(i==n){
			break;
		}
		cout<<endl;
		for(int j=0; j<n; j++){
			
			cout<<0<<" ";
		}
		
		cout<<endl;		
	}
}

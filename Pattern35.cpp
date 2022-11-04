//	To print the following pattern
//	0 0 0 0 0
//	1 1 1 1 1
//	0 0 0 0 0
//	1 1 1 1 1
//	0 0 0 0 0

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	int x=0;

	for(int i=1; i<=n; i+=2){
		for(int j=0; j<n; j++){
			cout<<1<<" ";
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

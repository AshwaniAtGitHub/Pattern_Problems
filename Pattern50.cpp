//	To print the following pattern
//	2
//	2 4
//	2 4 6
//	2 4 6 8
//	2 4 6 8 10

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	for (int i=1; i<=n; i++){
		for(int j=2; j<=2*i; j+=2){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

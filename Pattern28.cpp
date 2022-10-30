//	To print the following pattern
//	5 10 15 20 25
//	4 9 14 19 24
//	3 8 13 18 23
//	2 7 12 17 22
//	1 6 11 16 21


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for (int j=n-i+1; j<=n*n; j+=n){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

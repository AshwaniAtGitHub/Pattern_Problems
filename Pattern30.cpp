//	To print the following pattern
//	1 2 3 4 5
//	2 3 4 5 6
//	3 4 5 6 7
//	4 5 6 7 8
//	5 6 7 8 9

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=i; j<i+n; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

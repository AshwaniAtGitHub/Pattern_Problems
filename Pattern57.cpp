//	To print the following pattern
//	1
//	2 4
//	3 6 9
//	4 8 12 16
//	5 10 15 20 25

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number :"<<endl;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=i; j<=i*i; j+=i){
			cout<<j<<" ";
		}cout<<endl;
	}
}

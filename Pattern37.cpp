//	To print the following pattern
//	0 1 0 1 0
//	0 1 0 1 0
//	0 1 0 1 0
//	0 1 0 1 0
//	0 1 0 1 0

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j%2){
				cout<<"0 ";
			}
			else{ 
			cout<<"1 ";
			}
		}
		cout<<endl;
	}
}

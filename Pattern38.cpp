//	To print the following pattern
//	1 0 1 0 1
//	1 0 1 0 1
//	1 0 1 0 1
//	1 0 1 0 1
//	1 0 1 0 1

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(j%2){
				cout<<"1 ";
			}
			else{ 
			cout<<"0 ";
			}
		}
		cout<<endl;
	}
}

//	To print the following pattern
//	2
//	4 6
//	8 10 12
//	14 16 18 20
//	22 24 26 28 30

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	int pattern=2;
	for (int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<pattern<<" ";	
			pattern+=2;		
		}cout<<endl;
	}
}

//	To print the following pattern
//	1
//	3 5
//	7 9 11
//	13 15 17 19
//	21 23 25 27 29

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	int pattern=1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<pattern<<" ";
			pattern+=2;
		}cout<<endl;
	}
}

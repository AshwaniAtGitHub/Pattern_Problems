//	To print the following pattern
//	1
//	3 2
//	6 5 4
//	10 9 8 7
//	15 14 13 12 11

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	int count=1;
	for(int i = 1; i<=n; i++){
		int count2=count;
		for(int j=1; j<=i; j++){
			cout<<count2<<" ";
			count2--;
		}cout<<endl;
		count+=(i+1);
	}
}

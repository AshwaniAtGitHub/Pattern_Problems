//	To print the following pattern
//	1
//	3 5
//	5 7 9
//	7 9 11 13
//	9 11 13 15 17

#include<iostream>
using namespace std;


int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	for(int i=1; i<=2*n-1; i+=2){
		for(int j = i; j<=2*i-1; j+=2){
		cout<<j<<" ";
		}cout<<endl;
	}
}
 

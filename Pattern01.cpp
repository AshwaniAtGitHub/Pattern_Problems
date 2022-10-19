/*
To print the pattern
4321
4321
4321
4321
*/
#include<iostream>
using namespace std;

int main(){
	int n,i=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	while(i<=n)
	{
		int j=1;
		while(j<=n){
			cout<< n-j+1 ;
			j++;
		}
		i++;
		cout<<endl;
	}
}

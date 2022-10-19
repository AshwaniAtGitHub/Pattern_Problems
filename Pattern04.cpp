/*
 to print the following pattern
 1
 22
 333
 4444
 55555
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
		while(j<=i){
			cout<< i;
			j++;
		}
		i++;
		cout<<endl;
	}
}

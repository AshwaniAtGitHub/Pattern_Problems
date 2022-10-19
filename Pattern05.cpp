/*
 To print the following pattern
 1
 2 3
 3 4 5
 4 5 6 7
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
		int value=i;
		while(j<=i){
			cout<<value<<" " ;
			value++;
			j++;
		}
		i++;
		cout<<endl;
	}
}

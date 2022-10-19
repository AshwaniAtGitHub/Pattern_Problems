/*
to print the following pattern
 *
 **
 ***
 ****
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
			cout<< "*";
			j++;
		}
		i++;
		cout<<endl;
	}
}

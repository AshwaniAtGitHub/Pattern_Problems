/*
 To print the following pattern without using  int value unlike previous question
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
		while(j<=i){
			cout<< i+j-1 <<" " ;
			j++;
		}
		i++;
		cout<<endl;
	}
}

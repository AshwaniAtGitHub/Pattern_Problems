//	To print the following pattern
//	5 6 15 16 25
//	4 7 14 17 24
//	3 8 13 18 23
//	2 9 12 19 22
//	1 10 11 20 21

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	for(int i=1; i<=n; i++){
		int x=n-i+1,y=n+i;
		for(int j=1; j<=n; j+=2){
			cout<<x<<" ";
			if(j==n){break;}
			cout<<y<<" ";
			x+=2*n;
			y+=2*n;			
		}
		cout<<endl;
	}
}

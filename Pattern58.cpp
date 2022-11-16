//	To print the following pattern
//	1
//	6 2
//	10 7 3
//	13 11 8 4
//	15 14 12 9 5

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number :"<<endl;
	cin>>n;
	
	int x=n+1,count=1;
	for (int i=1; i<=(n*(n+1))/2; i+=x){
		int y=x-1;
		int j=i;
		while(j>=count){
			cout<<j<<" ";
			j-=y;
			y++;
		}cout<<endl;
		x--;
		count++;
	}
	
}

//	To print the following pattern
//	1 6 11 16 21
//	2 7 12 17 22
//	3 8 13 18 23
//	4 9 14 19 24
//	5 10 15 20 25


#include<iostream>
using namespace std;
 int main(){
 	int n;
 	cout<<"Enter a number:"<<endl;
 	cin>>n;
 	for (int i=1; i<=n; i++){
 		for (int j=i;j<=(n*(n-1)+i); j+=n){		 
 		cout<< j <<" ";
 		}
 		cout<<endl;
	 }
}

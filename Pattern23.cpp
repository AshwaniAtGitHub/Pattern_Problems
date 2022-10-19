/*
   To print the following pattern
   1234554321
   1234**4321
   123****321
   12******21
   1********1
*/

#include<iostream>
using namespace std;
int main(){
	int n,row=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	for(row=1; row<=n; row++){
		
//		first triangle
		int tr1=1;
		while(tr1<=n-row+1){
			cout<<tr1;
			tr1++;
		}
		
//		second triangle
		int tr2=2*(row-1);
		while(tr2){
			cout<<"*";
			tr2--;
		}
		
//		third triangle		
		int tr3=n-row+1;
		while(tr3>=1){
			cout<<tr3;
			tr3--;
		}
	 cout<<endl;
	}
}

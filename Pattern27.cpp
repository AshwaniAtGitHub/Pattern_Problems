//	To print the following pattern
//	1 10 11 20 21
//	2 9 12 19 22
//	3 8 13 18 23
//	4 7 14 17 24
//	5 6 15 16 25


#include<iostream>
using namespace std;
 int main(){
 	int n;
 	cout<<"Enter a number:"<<endl;
 	cin>>n;
 	for (int i=1; i<=n; i++){
 		int x=i,y=(2*n+1)-i;
 		for(int j=1; j<=n; j++){
 			 cout<<x<<" ";
 			 if (j==n){
 			 	break;
			  }
			 cout<<y<<" ";
 			 x+=2*n; 			 
 			 y+=2*n;
 			 j++;			 			
			}
 	  	cout<<endl;
		}
	}

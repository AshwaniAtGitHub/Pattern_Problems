//	To print the following pattern
//	A F K P U
//	B G L Q V 
//	C H M R W
//	D I N S X
//	E J O T Y

#include<iostream>
using namespace std;

int main(){
	int n,x;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	char pattern = 'A';
	
	for(int i=1; i<=n; i++){
		
		for(int j=0; j<n*n; j+=n){
			
			cout<<(char)(pattern+j)<<" ";
			
		}
		pattern = pattern+1;
		cout<<endl;
	}
}

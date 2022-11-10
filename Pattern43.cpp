//	To print the following pattern
//	
//	E J O T Y
//	D I N S X
//	C H M R W
//	B G L Q V
//	A F K P U

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	for (int i=0; i<n; i++){
		
		char pattern = 'A'+n-(i+1);
		
		for (int j=0; j<n*n; j+=n){
			
			cout<<(char)(pattern+j)<<" ";
			
		}
		cout<<endl;		
	}
}

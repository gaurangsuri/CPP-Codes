#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a='a';
	//first-half
	for(int i=1;i<=n;i++){
		//spaces
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		//digits
		for(int k=1;k<=i;k++){
			cout<<char(a);
		}
		//SH-digits
		for(int l=1;l<=i-1;l++){
			cout<<char(a);
		}
		cout<<endl;
		a++;
	}
}

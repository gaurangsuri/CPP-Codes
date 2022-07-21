#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1;
	cin>>n2;
	int sn;
	if(n1<=n2){
	sn=n1;
	}
	else{
		sn=n2;
	}
	int hcf;
	for(int i=1;i<=sn;i++){
		if(n1%i==0 && n2%i==0){
			hcf=i;
		}
	}
	cout<<hcf;
}

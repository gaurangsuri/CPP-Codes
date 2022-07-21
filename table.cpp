#include<iostream>
using namespace std;
int main(){
	int a;
	int n;
	cin>>a;
	cin>>n;
	n++;
	int i=1;
	jump:
		cout<<a<<" * "<<i<<" = "<<a*i<<endl;
		i++;
		if(i!=n){
			goto jump;
		}
}

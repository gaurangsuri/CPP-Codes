#include<string>
#include<iostream>
using namespace std;
void rev(string str){
	int n=str.length();
	if(n==1){
		cout<<str<<endl;
	}
	else{
		cout<<str[n-1];
		rev(str.substr(0,n-1));
	}
}
int main(){
	string str;
	cin>>str;
	rev(str);
}

#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin>>str;
	int n=str.length();
	for(int i=0;i<n;i++){
		switch(str[i]){
			case 'a':
				cout<<'a';
				break;
			case 'e':
				cout<<'e';
				break;
			case 'i':
				cout<<'i';
				break;
			case 'o':
				cout<<'o';
				break;
			case 'u':
				cout<<'u';
				break;
		}
	}
}

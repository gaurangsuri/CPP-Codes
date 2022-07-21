#include<iostream>
using namespace std;
int main(){
	int n,orn;
	cout<<"enter a 3 digit number - ";
	cin>>n;
	orn=n;
	int result=0,remainder;
	while(n!=0){
		remainder=n%10;
		result=result+(remainder*remainder*remainder);
		n=n/10;
	}
	if(result==orn){
		cout<<"the given number is an armstrong number";
	}
	else{
		cout<<"given number is not an armstrong number";
	}
}

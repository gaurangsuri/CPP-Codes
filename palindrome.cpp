#include<iostream>
using namespace std;
bool isPalindrome(int n){
	int cop_n;
	int rev_n;
	int rem;
	cop_n=n;
	while(n!=0){
		rem=n%10;
		rev_n=(rev_n*10)+rem;
		n=n/10;
	}
	if(rev_n==cop_n){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int n;
	cout<<"input number to check for palindrome - ";
	cin>>n;
	if(isPalindrome(n)){
		cout<<n<<" is a palindrome.";
	}
	else{
		cout<<n<<" is not a palindrome";
	}
}

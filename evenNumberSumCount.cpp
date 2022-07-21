#include<iostream>
#include<string>

using namespace std;

int main(){
	//even number sum and count question
	
	int ul=0;
	int ll=0;
	cout<<"Please enter the lower limit. ";
	cin>>ll;
	cout<<endl;
	cout<<"Please enter the upper limit. ";
	cin>>ul;
	cout<<endl;
	
	int count=0;
	int sum=0;

	for(int i=ll+1;i<ul;i++){
		if(i%2==0){
			sum=sum+i;
			count=count+1;
		}
	}
	
	cout<<"The sum of all the even numbers between "<<ll<<" and "<<ul<<" is "<<sum<<" and the count of all the even numbers is "<<count<<endl;
	cout<<endl;
	cout<<"PROGRAM END"<<endl;
	return sum;
}

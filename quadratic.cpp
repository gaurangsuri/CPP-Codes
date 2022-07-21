#include<iostream>
#include<cmath>
using namespace std;
float dis(float a,float b,float c){
	float d;
	d = (b*b)-(4*a*c);
	return d;
}
int main(){
	float a,b,c;
	cout<<"please enter the three co-efficients - "<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	float d = dis(a,b,c);
	if(d>0){
		float r1 = (-b + sqrt(d))/(2*a);
		float r2 = (-b - sqrt(d))/(2*a);
		cout<<r1<<endl;
		cout<<r2<<endl;
		}
	else if(d=0){
		float r= -b/2*a;
		cout<<r<<endl;
	}
	else{
		cout<<"roots are complex.";
	}
}

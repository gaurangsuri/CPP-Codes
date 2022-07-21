#include<iostream>
using namespace std;
int totaledgelength(int a){
	int ta;
	ta = 12*a;
	return ta;
}
int surfacearea(int a){
	int ts;
	ts = 6*(a*a);
	return ts;
}
int vol(int a){
	int tv;
	tv=(a*a*a);
	return tv;
}
int main(){
	int a;
	cout<<"imagine a cube with sides with the length of (a). please enter the value of a - ";
	cin>>a;
	int ta;
	ta =totaledgelength(a);
	cout<<" total length of edges of the cube is "<<ta<<"cm."<<endl;
	int ts;
	ts =surfacearea(a);
	cout<<" total surface area of the cube is "<<ts<<"cm^2."<<endl;
	int tv;
	tv=vol(a);
	cout<<" total volume of the cube is "<<tv<<"cm^3."<<endl;
}

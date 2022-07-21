#include<iostream>
using namespace std;
float ar(int r){
	float area = 4*(3.14)*(r*r);
	return area;
}
float volume(int r){
	float vol = (4/3)*(3.14)*(r*r*r);
	return vol;
}
int main(){
	cout<<"please enter radius of the sphere - ";
	int r;
	cin>>r;
	float area;
	area=ar(r);
	cout<<"surface area is "<<area<<endl;
	float vol;
	vol=volume(r);
	cout<<" volume is "<<vol<<endl;
}

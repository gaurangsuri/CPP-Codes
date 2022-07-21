#include<iostream>
using namespace std;
float sqrt(float n,float start,float end){
	float i=start;
	bool flag = false;
	while(!flag){
		if(i*i==n){
			return i;
			flag=true;
		}
		else if(i*i>n){
			float mid = ((i-1) + i)/2;
			start=i-1;
			end=i;
			if(mid*mid==n){
				return mid;
				flag=true;
			}
			else if(mid*mid<n){
				return sqrt(n,mid,end);
			}
			else{
				return sqrt(n,start,mid);
			}
		}
	i++;
	}
}
int main(){
float n;
cin>>n;
float r=sqrt(n,1,n);
cout<<r;
}

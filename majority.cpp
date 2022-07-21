//majority occuration in array of ssize n;
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int c=n/2;
	int cmax;
	int max;
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[j]==arr[i]){
				count++;
			}
		}
		if(count>c){
			cmax=count;
			max=arr[i];
		}
	}
	cout<<"maximum int is "<<max<<" ocuuring "<<cmax<<" times.";
}

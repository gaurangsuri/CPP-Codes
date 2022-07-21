#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
	for(int x=n-1;x>0;x--){
		for(int i=0;i<x;i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"SIZE OF ARRAY ? ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		int x;
		cout<<"ENTER ELEMENT ";
		cin>>x;
		arr[i]=x;
	}
	bubblesort(arr,n);
}

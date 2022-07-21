#include<iostream>
using namespace std;
int main(){
	cout<<"please enter the number of elements of the array. ";
	int n=0;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"please enter the "<<i+1<<"the element.";
		cin>>arr[i];
	}
	
	int p=0;
	int c=0;
	
	for(p=1;p<n;p++){
		for(c=0;c<n-p;c++){
			if(arr[c]>arr[c+1]){
				int temp=0;
				temp=arr[c+1];
				arr[c+1]=arr[c];
				arr[c]=temp;
			}
		}
	}
	
	cout<<"the sorted array is:- "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

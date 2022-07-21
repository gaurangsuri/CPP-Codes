#include<iostream>
using namespace std;
int main(){
	//creation
	int n;
	cout<<"please input size of array - ";
	cin>>n;
	int arr[n];
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<"please enter the "<<i+1<<"th element - ";
		cin>>arr[i];
	}
	//largest number
	int biggest;
	biggest=-1000;
	for(int i=0;i<n;i++){
		if(arr[i]>biggest){
			biggest=arr[i];
		}
	}
	cout<<"largest element of the array is "<<biggest<<endl;
	//smallest number
	int smallest;
	smallest=52000;
	for(int i=0;i<n;i++){
		if(arr[i]<smallest){
			smallest=arr[i];
		}
	}
	cout<<"smallest element of the array is "<<smallest<<endl;
}

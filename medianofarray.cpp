#include<iostream>
#include<bits/stdc++.h>
std::cout;
std::cin;
std::endl;
int main(){
    int med;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n%2==1){
        med=(n+1)/2;
        cout<<"median of the array is "<<arr[med-1]<<endl;
    }
    else{
        int x=n/2;
        int y=(n/2)+1;
        int med=(arr[x-1]+arr[y-1])/2;
        cout<<"median of the array is "<<med<<endl;
    }
}

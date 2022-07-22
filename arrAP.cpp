#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool arrap(int arr[],int n){
    int d=arr[n-1]-arr[n-2];
    bool flag=true;
    for(int i=n-1;i>=1;i--){
        if(arr[i]-arr[i-1]==d){
            flag=true;
        }
        else{
            flag=false;
        }
    }
    return flag;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    bool flag =arrap(arr,n);
    if(flag){
        cout<<"Array is in AP";
    }
    else{
        cout<<"Array is not in AP";
    }
}

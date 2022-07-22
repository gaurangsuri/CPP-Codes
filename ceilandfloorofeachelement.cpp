#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sortarr[n];
    for(int i=0;i<n;i++){
        sortarr[i]=arr[i];
    }
    sort(arr,arr+n);
    int ji;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(sortarr[i]!=arr[j]){
                continue;
            }
            if(n==1){
            	cout<<"for "<<sortarr[i]<<" no floor , no ceil "<<endl;
            	break;
			}
            if(j==0){
                cout<<"for "<<sortarr[i]<<" no floor , ceil = "<<arr[j+1]<<endl;
                break;
            }
            else if(j==(n-1)){
                cout<<"for "<<sortarr[i]<<" floor = "<<arr[j-1]<<" , no ceil "<<endl;
                break;
            }
            else{
                cout<<"for "<<sortarr[i]<<" floor = "<<arr[j-1]<<" , ceil = "<<arr[j+1]<<endl;
                break;
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<sortarr[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
}

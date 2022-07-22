#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<3){
        cout<<"INVALID";
        return 1;
    }
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m[3]={0};
    int ji;
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            if(m[i]<=arr[j]){
                m[i]=arr[j];
                ji=j;
            }
        }
        for(int j=0;j<n;j++){
            if(j==ji){
                arr[j]=INT_MIN;
            }
        }
    }
    int avv;
    for(int i=0;i<3;i++){
        avv=avv+m[i];
    }
    avv=avv/3;
    cout<<"average of the three largest elements of the array are :-  "<<avv;
    return 0;
}

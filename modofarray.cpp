#include<iostream>
std::cout;
std::cin;
std::endl;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxo=0;
    int maxc;
    for(int i=0;i<n;i++){
        int o=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                o++;
            }
        }
        if(maxo<o){
            maxo=o;
            maxc=arr[i];
        }
    }
    cout<<"mode of the array is "<<maxc<<" and it appears "<<maxo<<" times in the array"<<endl;
}

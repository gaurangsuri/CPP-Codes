#include<iostream>
std::cin;
std::cout;
std::endl;
int main(){
    string x;
    cin>>x;
    int n=x.length();
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<x[i]<<" ";
        }
    }
    return 0;
}
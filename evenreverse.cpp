#include<iostream>
std::cout;
std::cin;
int main(){
    int x1,x2;
    cin>>x1>>x2;
    if(x2>x1){
        for(int i=x2;i>=x1;i--){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }
    else{
        for(int i=x2;i<=x1;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}

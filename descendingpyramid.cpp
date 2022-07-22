#include<iostream>
std::cout;
std::cin;
std::endl;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        if(i%2==1){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int j=i;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
        }
    }
}

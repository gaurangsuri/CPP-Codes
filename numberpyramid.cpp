#include<iostream>
std::cout;
std::cin;
std::endl;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

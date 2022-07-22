#include<iostream>
std::cout;
std::cin;
std::endl;
int main(){
    int x;
    cin>>x;
    int total=0;
    while(true){
        total=total+x;
        cout<<"total "<<total<<endl;
        cout<<endl;
        cin>>x;
        if(x==0){
            break;
        }
    }
    cout<<"final total "<<total;
}

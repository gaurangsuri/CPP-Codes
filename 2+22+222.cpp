#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int c;
    cin>>n;
    cin>>c;
    int sum=0;
    int prev=0;
    for(int i=0;i<c;i++){
        int a=pow(10,i);
        int s=2*a+prev;
        prev=s;
        sum=sum+s;
    }
    cout<<sum;
    return 0;
}

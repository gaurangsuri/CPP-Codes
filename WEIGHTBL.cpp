#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int w1,w2,x1,x2,m;
	    cin>>w1>>w2>>x1>>x2>>m;
	    int inc=w2-w1;
	    int min=x1*m;
	    int max=x2*m;
	    if(inc<min || inc>max){
	        cout<<0<<endl;
	    }
	    else{cout<<1<<endl;}
	    t--;
	}
	return 0;
}

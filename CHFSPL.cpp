#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int a,b,c;
	    cin>>a;
	    cin>>b;
	    cin>>c;
	    int h=a+b;
	    if(h<b+c){
	        h=b+c;
	    }
	    if(h<a+c){
	        h=a+c;
	    }
	    cout<<h<<endl;
	    t--;
	}
	return 0;
}

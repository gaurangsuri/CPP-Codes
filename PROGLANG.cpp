#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int a,b,a1,b1,a2,b2;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if(a==a1){
	        if(b==b1){
	            cout<<1<<endl;
	        }
	        else{
	            cout<<0<<endl;
	        }
	    }
	    else if(a==b1){
	        if(b==a1){
	            cout<<1<<endl;
	        }
	        else{
	            cout<<0<<endl;
	        }
	    }
	    else if(a==a2){
	        if(b==b2){
	            cout<<2<<endl;
	        }
	        else{
	            cout<<0<<endl;
	        }
	    }
	    else if(a==b2){
	        if(b==a2){
	            cout<<2<<endl;
	        }
	        else{
	            cout<<0<<endl;
	        }
	    }
	    else{
	        cout<<0<<endl;
	    }
	    t--;
	}
	return 0;
}

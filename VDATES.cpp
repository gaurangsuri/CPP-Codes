#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int d;
	    int l;
	    int r;
	    cin>>d;
	    cin>>l;
	    cin>>r;
	    if(l<=d && d<=r){
	        cout<<"Take second dose now"<<endl;
	    }
	    else if(l>d){
	        cout<<"Too Early"<<endl;
	    }
	    else{
	        cout<<"Too Late"<<endl;
	    }
	    t--;
	}
	return 0;
}

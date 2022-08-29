#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int x;
	    cin>>x;
	    if(300>=x && x>=200){
	        cout<<"Hard"<<endl;
	    }
	    else if(200>x && x>=100){
	        cout<<"Medium"<<endl;
	    }
	    else{
	        cout<<"Easy"<<endl;
	    }
	    t--;
	}
	return 0;
}

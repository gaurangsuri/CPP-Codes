#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int a,b,x;
	    cin>>a;
	    cin>>b;
	    cin>>x;
	    int count =0;
	    for(int i=a;i<=b;i=i+x){
	        count++;
	    }
	    count=count-1;
	    cout<<count<<endl;
	    t--;
	}
	return 0;
}

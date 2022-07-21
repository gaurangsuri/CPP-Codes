#include<iostream>
using namespace std;
int main(){
	
	//declaration
	int n;
	cout<<"no of nodes in the graph ?";
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=0;
		}
	}
	
	cout<<endl;
	int edges;
	cout<<"no of edges in the graph ?";
	cin>>edges;
	cout<<endl;
	while(edges!=0){
		int orr;
		int end;
		cout<<"the starting node of the edge ?";
		cin>>orr;
		cout<<endl;
		cout<<"the ending node of the edge ?";
		cin>>end;
		cout<<endl;
		if(orr>n || end>n){
			cout<<"please enter valid values!"<<endl;
		}
		
		orr--;
		end--;
		arr[orr][end]=1;
		edges--;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

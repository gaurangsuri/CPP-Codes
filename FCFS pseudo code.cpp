#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"please enter the number of proccesses..";
	cin>>n;
	
	int proccesses[n];
	for(int i=0;i<n;i++){
		proccesses[i]=i;
	}
	
	int bt[n];
	for(int i=0;i<n;i++){
		cout<<"input burst time of proccess "<<i+1<<" ";
		cin>>bt[i];
	}
	
	int wt[n];
	int tat[n];
	int totalwt=0;
	int totaltat=0;
	
	wt[0]=0;
	for(int i=1;i<n;i++){
		wt[i]=bt[i-1]+wt[i-1];
		totalwt=totalwt+wt[i];
	}
	
	for(int i=0;i<n;i++){
		tat[i]=bt[i]+wt[i];
		totaltat=totaltat+tat[i];
	}
	
	cout<<"proccesses     burst time     waiting time     turn around time"<<endl;
	for(int i=0;i<n;i++){
		cout<<i+1<<"               "<<bt[i]<<"               "<<wt[i]<<"               "<<tat[i]<<endl;
	}
	cout<<"average waiting time = "<<float(totalwt)/float(n)<<endl;
	cout<<"average turn around time = "<<float(totaltat)/float(n)<<endl;
}

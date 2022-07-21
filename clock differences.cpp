#include<iostream>
using namespace std;
int main(){
	int H1,M1,S1,H2,M2,S2,total1,total2;
	jump1:
	cout<<"enter the first clock(H/M/S) - "<<endl;
	cin>>H1>>M1>>S1;
	if( H1>=24 || M1>=60 || S1>=60 ){
		cout<<"please enter valid arguments.."<<endl;
		goto jump1;
	}
	jump2:
	cout<<"enter the second clock(H/M/S) - "<<endl;
	cin>>H2>>M2>>S2;
	if( H2>=24 || M2>=60 || S2>=60 ){
		cout<<"please enter valid arguments.."<<endl;
		goto jump2;
	}
	total1 = S1 + ( M1*60 ) + ( H1*3600 );
	total2 = S2 + ( M2*60 ) + ( H2*3600 );
	int diff;
	if(total1<total2){
		diff=total2-total1;
	}
	else if(total2<total1){
		diff=total1-total2;
	}
	else if(total1==total2){
		cout<<"the clocks are synchronized."<<endl;
		goto jump3;
	}
	else{
		cout<<"INVALID ARGUMENTS"<<endl;
		goto jump3;
	}
	// the total diff is in seconds
	// get the remaining seconds by getting a remainder by 60
	int FS,FM,FH;
	FS = diff%60;
	diff = diff/60;
	FM = diff%60;
	diff=diff/60;
	FH= diff;
	
	if(total1<total2){
		cout<<"clock 2 is ahead by "<<FH<<" hours "<<FM<<" minutes and "<<FS<<" seconds."<<endl;
	}
	else if(total2<total1){
		cout<<"clock 1 is ahead by "<<FH<<" hours "<<FM<<" minutes and "<<FS<<" seconds."<<endl;
	}
	else if(total1==total2){
		cout<<"the clocks are synchronized."<<endl;
	}
	jump3:
	return 0;
}

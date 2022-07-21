#include<iostream>
using namespace std;

class Arr_search{
	int *arr;
	int n=0;
	int flag=0;
	int keyn=0;
	int key=0;
	
	public:
		
	Arr_search(){ //space allocation
	
		cout<<"\nEnter the  number of elements.";
		cin>>n;
		
		arr=new int[n];
		
	}
	
	void create_array(){
		
		for(int i=0;i<n;i++){
			cout<<" enter the "<<i+1<<"th element. ";
			cin>>arr[i];
		}
		
	}
	
	void show(){
		cout<<"the elements in the array are:- "<<endl;
		for(int i=0;i<n;i++){
			cout<<arr[i]<<endl;
		}
	}
	
	void binary_search(){
		int beg=0;
		int end=n-1;
		int mid=(beg+end)/2;
		cout<<"please enter the key element."<<endl;
		cin>>key;
		while(beg<=end){
			
			if(arr[mid]==key){
				cout<<"element found at "<<mid<<" index";
				break;
				flag=1;
			}
			
			if(arr[mid]<key){
				beg=mid+1;
				mid=(beg+end)/2;
			}
			
			if(arr[mid]>key){
				end=mid-1;
				mid=(beg+end)/2;
			}
		}
		if(end<beg){
			cout<<"element not found.";
		}
	}
};

int main(){
	
	Arr_search obj;
	
	obj.create_array();
	
	obj.show();
	
	obj.binary_search();
}

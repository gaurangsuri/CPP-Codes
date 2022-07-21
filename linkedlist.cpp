#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node* next;
};
class singlylinkedlist{
	node* start;
	public:
	singlylinkedlist(){
		start=NULL;
	}
	
	void insert_beg(){
		node *new_node;
		int n=0;
		cout<<"\nenter the element";
		cin>>n;
		while(n!=-1){
			new_node=new node;
			if(new_node==NULL){
				cout<<"memory allocation wasnt possible"<<endl;
			}
			else{
				cout<<"memory is allocated and the address of the node is "<<new_node<<endl;
				new_node->data=n;
				new_node->next=start;
				start=new_node;
			}
			cout<<"\nenter the element ";
			cin>>n;
		}
	}
	
	void insert_end(){
		node *new_node;
		node *save;
		int n=0;
		cout<<"enter the element ";
		cin>>n;
		while(n!=-1){
			new_node = new node;
			if(new_node==NULL){
				cout<<"\nmemory cannot be allocated.";
			}
			else{
				cout<<"memory is allocated and the address of the new_node is "<<new_node<<endl;
				
				if(start==NULL){
					new_node->data=n;
					new_node->next=start;
					start=new_node;
					save=new_node;
				}
				else{
					new_node->data=n;
					new_node->next=NULL;
					save->next=new_node;
					save=new_node;
				}
			}
			cout<<"\nEnter element. ";
			cin>>n;
		}
	}
	
	void show(){
		cout<<"\n..................Displaying the Linked List....................";
		node *ptr;
		ptr=start;
		while(ptr){
			cout<<endl<<ptr->data;
			ptr=ptr->next;
		}
	}
};

int main(){
	singlylinkedlist obj;
	cout<<"\nstarting insertion at the beggining."<<endl;
	obj.insert_beg();
	
	cout<<"\nstarting insertion at the end."<<endl;
	obj.insert_end();
	
	obj.show();
	
	return 0;
}

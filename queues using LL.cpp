#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node* next;
};
class llqueues{
	node* front;
	node* rear;
	int max;
	public:
	llqueues(){
		front=NULL;
		rear=NULL;
		max=5;
	}
	
	bool isempty(){
		if(front==NULL && rear==NULL){
			return true;
		}
		else{
			return false;
		}
	}
	
	bool isfull(){
		int count=0;
		node *ptr;
		ptr=front;
		while(ptr!=NULL){
			count++;
			ptr=ptr->next;
			if(count==max){
				return true;
				break;
			}
		}
		return false;
	}
	
	void enqueue(int x){
		if(isfull()){
			cout<<"\nOVERFLOW !!!";
		}
		else{
			node *new_node;
			node *save;
			new_node = new node;
			if(new_node==NULL){
				cout<<"\nelement not inserted. memory allocation error.";
			}
			else{
				cout<<"\nmemory is allocated and the element is entered at the address "<<new_node<<endl;
				
				if(rear==NULL){
					new_node->data=x;
					new_node->next=rear;
					rear=new_node;
					front=new_node;
					save=new_node;
				}
				else{
					new_node->data=x;
					new_node->next=NULL;
					save->next=new_node;
					save=new_node;
					rear=new_node;
				}
			}
		}
	}
	
	void dequeue(){
		if(isempty()){
			cout<<"\nUNDERFLOW !!!";
		}
		else{
			cout<<"\ndeleting element from the queue"<<endl;
			node *save;
			save=front->next;
			front=save;
		}
	}
	
	void show(){
		node *ptr;
		ptr=front;
		while(ptr){
			cout<<endl<<ptr->data;
			ptr=ptr->next;
		}
	}
};

int main(){
	llqueues obj;
	obj.enqueue(5);
	obj.enqueue(6);
	obj.enqueue(7);
	obj.enqueue(8);
	obj.enqueue(9);
	obj.show();
	obj.dequeue();
	obj.dequeue();
	obj.show();
	obj.enqueue(5);
	obj.show();
}

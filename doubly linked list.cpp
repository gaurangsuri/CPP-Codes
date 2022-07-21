#include<iostream>
using namespace std;

class node
{

public:
int data;
node *next;
node *previous;

};


class DoublyLinkedList
{

node *front;
node *rear;

public:
DoublyLinkedList()
{
front = NULL;
}


void createAtbeg()
{
int value = 0;
node *new_node;
cout<<"\nEnter the data ";
cin>>value;

while(value!=-1)
{

if(front==NULL)
{
new_node = new node;
new_node->data = value;
new_node->next = NULL;
new_node->previous = NULL;
front = new_node;
}

else
{
new_node = new node;
new_node->data = value;
new_node->previous = NULL;
new_node->next = front;
front->previous = new_node;
front = new_node;
}
cout<<"\nEnter the data ";
cin>>value;
}
}
void createAtend()
{
int value = 0;
node *new_node;
cout<<"\nEnter the data ";
cin>>value;
while(value!=-1)
{
if(front==NULL)
{
new_node = new node;
new_node->data = value;
new_node->next = NULL;
new_node->previous = NULL;
front = new_node;
rear = new_node;
}

else
{
new_node = new node;
new_node->data = value;
new_node->previous = rear;
new_node->next = NULL;
rear->next = new_node;
rear = new_node;
}
cout<<"\nEnter the data ";
cin>>value;
}
}

void show()
{
cout<<"\n----------------Displaying the linked list-------------------------";
node *ptr;
ptr = front;
while(ptr)
{
cout<<endl<<ptr->data;
ptr = ptr->next;
}

}
void rev_show()
{
cout<<"\n----------------Displaying the linked list in reverse order-------------------------";
node *ptr;
ptr = rear;
while(ptr)
{
cout<<endl<<ptr->data;
ptr = ptr->previous;
}

}

void search_front()
{
	node *ptr;
	ptr=start;
	
	int key=0;
	cout<<endl<<"enter the element to be searched ";
	cin>>key;
	
	while(ptr){
		
		if(ptr->data!=key){
			ptr=ptr->next;
		}
		else if(ptr->data==key){
			break;
		}
		
	}
	
	if(ptr==NULL){
		cout<<"Element not found"<<endl;
	}
	else{
		cout<<"Element exists";
	}
}

void search_end()
{
	node *ptr;
	ptr=end;
	
	int key=0;
	cout<<endl<<"enter the element to be searched ";
	cin>>key;
	
	while(ptr){
		
		if(ptr->data!=key){
			ptr=ptr->previous;
		}
		else if(ptr->data==key){
			break;
		}
		
	}
	
	if(ptr==NULL){
		cout<<"Element not found"<<endl;
	}
	else{
		cout<<"Element exists";
	}
}

void search_compare(){

	node *ptr;
	ptr=start;
	
	int begcount=0;
	int endcount=0;
	int key=0;
	cout<<endl<<"enter the element to be searched ";
	cin>>key;
	
	while(ptr){
		
		if(ptr->data!=key){
			ptr=ptr->next;
			begcount=begcount+1;
		}
		else if(ptr->data==key){
			break;
		}
		
	}
	
	if(ptr==NULL){
		cout<<endl<<"Element not found"<<endl;
	}
	else{
		cout<<endl<<"Element exists"<<endl;
	}
	
	ptr=end;
	while(ptr){
		
		if(ptr->data!=key){
			ptr=ptr->previous;
			endcount=endcount+1;
		}
		else if(ptr->data==key){
			break;
		}
		
	}
	
	if(begcount<endcount){
		cout<<endl<<"search from the beggining is faster in this case. ";
	}
	else if(begcount>endcount){
		cout<<endl<<"search from the end is faster in this case. ";
	}
	else{
		cout<<endl<<"search from the beggining and search from the end both take the same time. ";
	}

}

void insert(){
	
	node *ptr;
	ptr=start;
	node *new_node;
	
	int key=0;
	cout<<endl<<"enter the element to be searched ";
	cin>>key;
	
	while(ptr){
		
		if(ptr->data!=key){
			ptr=ptr->next;
		}
		else if(ptr->data==key){
			break;
		}
		
	}
	
	if(ptr==NULL){
		cout<<"Element not found"<<endl;
	}
	else{
		cout<<"Element exists";
	}
	
	
	int value=0;
	cout<<"enter value to be entered ";
	cin>>value;
	while(value!=-1){
		if(ptr->next=NULL){
			new_node=new node;
			new_node->next=NULL;
			new_node->previous=ptr;
			new_node->data=value;
			ptr->next=new_node;
		}
		else{
			new_node=new node;
			new_node->data=value;
			new_node->next=ptr->next;
			new_node->previous=ptr;
			ptr->next->previous=new_node;
			ptr->next=new_node;	
		}
	}
	
}

};

int main()
{
DoublyLinkedList DLL;
DLL.createAtbeg();
DLL.createAtend();
DLL.show();
DLL.insert();
DLL.show();
DLL.insert_beg();
DLL.show();
DLL.search_front();
DLL.search_end();
DLL.rev_show();
DLL.search_compare();
return 0;
}

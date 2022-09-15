#include<iostream>
using namespace std;
class node{
    public:
    char data;
    node* next;
    node* prev;
};
class Circular{
    private:
    node* head;
    node* tail;
    public:
    Circular(){
        head=NULL;
        tail=NULL;
    }
    
    void pushBack(char x){
        node* temp = new node();
        temp->data=x;
        if(tail==NULL){
            head=temp;
            tail=temp;
            temp->next=tail;
            temp->prev=head;
        }else{
            tail->next=temp;
            temp->prev=tail;
            temp->next=head;
            tail=temp;
        }
    }

    void Number(){
        node* temp = head;
        int i=1;
        while(temp!=tail){
            if(temp->data==' '){
                temp=temp->next;
            }else if(temp->data==(temp->next)->data){
                i++;
                temp=temp->next->next;
            }else{
                i++;
                temp=temp->next;
            }
        }
        cout<<i<<endl;
    }
};
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    Circular cl;
    for(int i=0;i<n;i++){
        cl.pushBack(s[i]);
    }
    cl.Number();
    return 0;
}
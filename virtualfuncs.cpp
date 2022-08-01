#include<iostream>
using namespace std;
    class base{
        public:
        virtual void print(){
            cout<<"Base Print"<<endl;
        }
        void show(){
            cout<<"Base Show"<<endl;
        }
    };
    class derived:public base{
        public:
        void print(){
            cout<<"derived Print"<<endl;
        }
        void show(){
            cout<<"derived Show"<<endl;
        }
    };
int main(){
    base *ptr;
    derived d;
    ptr = &d;
    
    ptr->show();
    ptr->print();
}
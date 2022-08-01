#include<iostream>
using namespace std;
class parent{ 
    public:
        void pin(){
            cout<<"hello i am a parent"<<endl;
        };
};
class mum{
    public:
        void maa(){
            cout<<"maaa called run"<<endl;
        }
};
class child:public parent,public mum{
    public:
        void hi(){
            cout<<"Hello i am the child "<<endl;
        };
};
class grandparent:public child{
    public:
    void gc(){
        cout<<"i am smoll"<<endl;
    };
};
int main(){
     parent par;
     par.pin();
     child c1;
     c1.hi();
     c1.pin();
     c1.maa();
     grandparent g1;
     g1.pin();
     g1.maa();
     g1.gc();
}

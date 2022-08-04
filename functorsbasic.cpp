#include<iostream>
using namespace std;
class greetings{
    public:
    void operator()(){
        cout<<"good morning !"<<endl;
    }
};
int main(){

    //functors means that we create an object of a class that itself can act as a function
    //class obj;
    //obj();
    //eg of functors;
    // also called OPERATOR OVERLOADING
    //operator is  a pre defined method which creates a functor .. operational overloading method

    greetings obj;
    obj();
    // can also call it using obj.operator()();
    obj.operator()();
}
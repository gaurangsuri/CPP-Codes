//OOPS
//Object oriented programming subsystem

// class:- it is a collection of data members and manual functions+
//Objects:- actual implementation of the class , also called instances

//functions declared ina a classs are called methods

// abstraction :- selecting the required details of the class

//inheritance :-inheriting the members of a class in another class

//encapsulation :- hiding the private details of the class from outsiders

//polymorphism :- having different  forms of the same member functions

#include<iostream>
using namespace std;

class human{
    private:
    int h_count;
    public:
        human(string s){
            cout<<"a human is born named "<<s<<endl;
            cout<<hair<<endl;
        }
        bool hair;
        string h_color;
    
    void walk(){
        cout<<"i can walk"<<endl;
    }

    void talk(){
        cout<<"i can talk"<<endl;
    }

    void hear(){
        cout<<"i can hear"<<endl;
    }
    void set(int c){
        h_count=c;
    }
    void get(){
        cout<<h_count<<endl;
    }
};

class monkey{
    public:
        string fur;
        int age;

    void col(){
        cout<<"my fur is "<<fur<<" colored"<<endl;
    }

    void ag(){
        cout<<"i am "<<age<<" years old"<<endl;
    };
};
int main(){
    human h1("yo");
    h1.hair=true;
    h1.h_color="Black";
    human h2("what");
    h2.hair=true;
    h2.h_color="brown";
    human h3("is up");
    h3.h_color="NIL";
    h3.hair=false;
    monkey m1;
    m1.fur="brown";
    m1.age=12;
    monkey m2;
    m2.fur="black";
    m2.age=13;

    h1.hear();
    h2.talk();
    h3.walk();
    h1.set(34);
    h1.get();

    m1.col();
    m2.ag();
}
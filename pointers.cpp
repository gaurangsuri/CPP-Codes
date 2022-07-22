#include<iostream>
using namespace std;
int main(){
    int a=42;
    int *aptr = &a; // pointer declaration

    // cout<<aptr<<endl; // gives address of var a in this case
    // cout<<*aptr<<endl; // gives value of var a in this case

    // cout<< &a  <<endl; //both will give address of var a
    // cout<< aptr <<endl;

    // *aptr = 20; // accessing a variable through a pointer changes its value as well
    // cout<<a<<endl;

    //indirection operator multiple pointers to the same variable
    // int *aptr2=aptr;
    // *aptr2=90;
    // cout<<a; // this allows us to change value of var a in 3 different ways ++++++ a=20 ++++++ *aptr=20 ++++++ *aptr2=20

    // int data[10];
    // data[0]=20;
    // *data=30;
    // *(data+3)=50;         // it is possible to change values of array through pointers though it is not recommended
    // cout<<data[0]<<endl;
    // cout<<data[3]<<endl;

    //PASS BY REFERENCE IN CPP LOOK UP IN MORE DETAILS
    // makes it easier to change data value and eliminates problems of scope you can change value of a variable in main function while a whole another function is being executed through that very same function

    //reference variable
    // int &ar =a;
    // cout<<ar;
    // value of a is being stored in address of ar therefore when printing ar the value of a is being printed
    //any changes made to the new reference variable ar is reflected in the original variable a

    
}
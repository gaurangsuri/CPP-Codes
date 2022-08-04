#include<iostream>
#include<list>

using namespace std;

void printlist(list<int> l){
    for(list<int>::const_iterator i=l.begin();i!=l.end();i++){
        cout<<*i<<" ";
    }
    cout<<"\n";
}
int main(){
    list<int> l1={5,2,1,10,3,4,7,6,9,8};
    list<int> l2={13,14,12,15};

    cout<<"unsorted list l1: ";
    printlist(l1);

    cout<<"unsorted list l2: ";
    printlist(l2);

    cout<<"first element "<<l1.front()<<endl;
    cout<<"last element "<<l1.back()<<endl;

    l1.pop_back();
    cout<<"after pop back"<<endl;
    printlist(l1);

    l1.pop_front();
    cout<<"after pop front"<<endl;
    printlist(l1);

    l1.merge(l2);
    printlist(l1);
}
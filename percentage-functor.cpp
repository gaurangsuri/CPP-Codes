#include<iostream>
using namespace std;
class yearpercentage{
    private:
    int totalsubjects;
    public:
    yearpercentage(int totalsubjects){
        this->totalsubjects=totalsubjects;
    }
    int operator()(int sem1m,int sem2m){
        return (sem1m+sem2m)/totalsubjects;
    }
};

int main(){
    yearpercentage _ypercentage(10);
    int percentage = _ypercentage(350,350);
    cout<<percentage;
    return 0;
}
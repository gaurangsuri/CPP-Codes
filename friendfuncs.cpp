#include<iostream>
using namespace std;
class dist{
    private:
    int meter;
    friend int addfive(dist);
    public:
    dist() : meter(0){}
};
int addfive(dist d){
    d.meter += 5;
    return d.meter;
}
class dist2{
    private:
    static int meter;
    friend int addfive(dist2);
    public:
    meter=0;
};
int addfive(dist2 d){
    d.meter += 5;
    return d.meter;
}
int main(){
    dist d;
    int first = addfive(d);
    int second = addfive(d);
    dist2 d2;
    int first2 = addfive(d2);
    int second2 = addfive(d2);
    cout<<first<<" "<<second<<endl;
    cout<<first2<<" "<<second2<<endl;
}
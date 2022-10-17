#include<iostream>
using namespace std;

class OverLord{
    private:
    int a;
    int b;
    public:
    OverLord(): a(0),b(0){}
    void in(){
        cout<<"a: ";
        cin>>a;
        cout<<"\nb: ";
        cin>>b;
    }
    void operator--(){
    a=--a;
    b=--b;
    a=--a;
    b=--b;
    }
    void out(){
        cout<<"The decremented elements of the object a: "<<a<<"\nb: "<<b;
    }
};

int main(){
    OverLord obj;
    obj.in();
    --obj;
    obj.out();
}
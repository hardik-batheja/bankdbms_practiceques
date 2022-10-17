#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base created.\n";
    }
    ~Base(){
        cout<<"Base destroyed\n";
    }
    void Display(){
    // virtual void Display(){
        cout<<"Display of base"<<endl;
    }
};

class Derived:public Base
{
public:
    void Display(){
        cout<<"display of derived./n";
    }
};
class Derived2: public Derived
{
    public:
    void Display(){
        cout<<"display of derived2.";
    }
};
int main(){
    Base *p=new Derived2();
    p->Display();
    delete p;
    return 0;
}
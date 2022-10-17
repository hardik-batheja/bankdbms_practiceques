#include<iostream>
using namespace std;

struct A{
    virtual void f(){cout<<"class A"<<endl;}
};
struct B: A{
    void f(){cout<<"class B"<<endl;}
};
struct C: A{
    void f(){cout<<"class C"<<endl;}
};

void g(A& arg){
    arg.f();
}
int main(){
    B x;
    g(x);
    return 0;
}
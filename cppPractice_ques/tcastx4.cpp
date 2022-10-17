#include<iostream>
using namespace std;
class A{
    public:
    void fun_a(){cout<<"In class A\n";}
};
class B{
    public:
    void fun_b(){cout<<"In class B\n";}
};
int main(){
    B* x=new B();
    A* new_a=reinterpret_cast<A*>(x);
    new_a->fun_a();
    return 0;
}
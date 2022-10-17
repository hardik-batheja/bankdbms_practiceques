#include<iostream>
using namespace std;

class A{
    friend class B;
    friend class C;
    int a;
};
class B{
    friend class C;
};

class C{
    void f(A* p){
        p->a=2;
    }
};
int main(){
    C objC;
    // cout<<objC.p<<endl;
    return 0;
}
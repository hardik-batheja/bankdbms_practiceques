#include<iostream>
using namespace std;
class A{
    public:
    class B {
        public:
        virtual void fun(){
            cout<<"class b";
        }
    };
    B *z;

    class C : public B {
        public:
        B y;
        void fun(){
            cout<<"hello";
        }
        A::B y2;
        C *x;
        A::C *x2;
    };
};

int main(){
    A::C *d=new A::C;
    d->fun();
}

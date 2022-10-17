#include<iostream>
using namespace std;
class A{
    private:
    int a=5;
    public:
    A(){
        cout<<a<<endl;
    }
    friend class B;
};
class B{
    
    protected:
    int b=10;
    public:
    B(){
        cout<<b<<endl;
    }
    friend class C;
};
class C {
    
    public:
    int c=15;
    public:
    C(){
        B x;
        cout<<x.b<<endl;
    }
};
int main(){
    C obj;
}
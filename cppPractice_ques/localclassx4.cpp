#include<iostream>
using namespace std;
void fun()
{
    class test
    {
        public:
        void method()
        {cout<<"local class method() called";}
    };
    test t;
    t.method();
}
int main(){
    fun();
}
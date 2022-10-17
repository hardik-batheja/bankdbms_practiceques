#include<iostream> 
using namespace std;
 int x;
 void f(){
    class local{
        public:
        int f();
        int g(){return 0;}
        // static int a;
        int b;
    };
    // f(){cout<<"fun<<endl";}
 }
 int main(){
    f();
 }
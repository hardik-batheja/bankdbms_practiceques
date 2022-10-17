#include<iostream> 
using namespace std;
 int x;
 void f(){
    static int y;
    int x;
    extern int g();
    class local{
        int g(){return x;}
        int h(){return y;}
        int k(){return ::x;}
        int l(){return g();}
    };
 }
 int main(){
    f();
 }
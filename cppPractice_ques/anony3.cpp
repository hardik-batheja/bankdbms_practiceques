#include<iostream>
using namespace std;

typedef class{
    int value;
    public:
    void print(){
    cout<<"c1"<<endl;
    }
}c1;
typedef class:public c1{
    int val;
    public:
    void print2(){
    cout<<"c2"<<endl;
    }
}c2;
int main(){
    c2 ob1;
    ob1.print();
    ob1.print2();
    return 0;
}
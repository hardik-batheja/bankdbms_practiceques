#include<iostream>
using namespace std;

void function(int a,int b){
    cout<<"a*b="<<a*b<<endl;
    // return 0;
}

void function(double a,double b){
    cout<<"a+b="<<a+b<<endl;
    // return 0;
}

int main(){
    function(3,4);
    function(3.0,4.0);
    // function();
    // function(1);
    return 0;
}
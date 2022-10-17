#include<iostream>
using namespace std;

int function(int a,int b=10){
    cout<<"a+b="<<a+b<<endl;
    return 0;
}

int main(){
    int a=10,b;
    cout<<b<<endl;
    function(a,b);
    // function(3.0,4.0);
    // function();
    // function(1);
    return 0;
}
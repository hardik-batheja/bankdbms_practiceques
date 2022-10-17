#include<iostream>
using namespace std;

int main(){
    int a=3;
    double b=2.01;
    float c=1.1;
    a=c;
    cout<<a<<endl;
    a=int(b);
    cout<<a<<endl;
    return 0;
}
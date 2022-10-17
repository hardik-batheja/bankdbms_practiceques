#include<iostream>
using namespace std;
 
 void by_val(int a){
    a+=5;
    cout<<a<<endl;
 }
 void by_ref(int *p){
    *p+=5;
    cout<<*p<<endl;
 }
 
 int main(){
    int a=20;
    by_val(a);
    cout <<a<<endl;
    by_ref(&a);
    cout<<a<<endl;
    return 0;
 }
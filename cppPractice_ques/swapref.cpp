#include<iostream>
using namespace std;

void swap(int *p1,int *p2){
    int t= *p1;
    *p1=*p2;
    *p2=t;
    // cout<<p1<<endl<<*p2<<endl;
}
 
 int main(){
    int a=20,b=10;
    cout<< "a: " <<a<<endl;
    cout<< "b: "<<b<<endl;
    swap(&a,&b);
    cout<< "a: " <<a<<endl;
    cout<< "b: "<<b<<endl;
    return 0;
 }
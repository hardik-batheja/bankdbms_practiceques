#include<iostream>
using namespace std;
void greet(){
    cout << "Hello Harry!";
}
double sum(double a,double b){
    printf("sum\t");
    return a+b;
}
template<class T>
T add(T a,T b){
    printf("add\t");
    return a+b;
}
template<class S>
S sub(S a,S b){
    cout<<"sub\t";
    return a-b;
}


int main(){
    // auto x,y;
    // cin>>x>>y;
    cout<<sum(3.1,4)<<endl;
    cout<<add(3,4)<<endl;
    cout<<sub(6,4)<<endl;
    greet();
    return 0;
}
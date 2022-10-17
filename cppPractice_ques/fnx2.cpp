#include<iostream>
using namespace std;

int sum(int a,int b){
    cout<<"int \t";
    return a+b;
}
double sum(double a,double b){
    printf("doub\t");
    return a+b;
}

int main(){
    cout <<sum(3,4)<<endl;
    cout<<sum(3.1,3.4)<<endl;
    return 0;
}
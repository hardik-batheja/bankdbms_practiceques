#include<iostream>
using namespace std;
typedef class{
    int value;
public:
void setdata(int i){this->value=i;}
void printvalues(){cout<<"Value of i: "<<this->value<<endl;}
}myclass;
int main(){
    myclass obj1,obj2;
    obj1.setdata(12);
    obj1.printvalues();
    obj2.setdata(22);
    obj2.printvalues();
    return 0;
}
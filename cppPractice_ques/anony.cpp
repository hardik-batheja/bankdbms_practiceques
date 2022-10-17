#include<iostream>
using namespace std;
class{
    int value;
public:
void setdata(int i){this->value=i;}
void printvalues(){cout<<"Value: "<<this->value<<endl;}
}obj1;
int main(){
    obj1.setdata(12);
    obj1.printvalues();
    return 0;
}
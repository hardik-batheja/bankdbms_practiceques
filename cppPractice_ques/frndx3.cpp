#include<iostream>
using namespace std;
// class B;
class A{
    private:
    int numA=50;
    friend class B;
    public:
    A():numA(12){}
};
class B{
    public:
    int numB=40;
    B():numB(1){}
    int add(){
    A objectA;
    return objectA.numA+numB;
}
};
int main(){
    B objectB;
    cout<<"Sum: "<<objectB.add();
    return 0;
}

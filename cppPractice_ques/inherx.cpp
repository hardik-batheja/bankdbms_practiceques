#include<iostream>
using namespace std;
class base1{
    public:
    float salary=500;
};
class base2{
    public:
    float bonus=100;
};
class Deriverd1: public base1,public base2{
    public:
    float bonus2=200;
    void sum(){
        cout<<"Total salary: "<<salary+bonus+bonus2;
    }
};
int main(){
    Deriverd1 c;
    cout<<"yYour Salary is: "<<c.salary<<endl;
    cout<<"Your total Bonus is: "<<c.bonus+c.bonus2<<endl;
    c.sum();
    return 0;
}
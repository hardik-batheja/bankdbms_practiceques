#include<iostream>
using namespace std;
class base
{
public:
    int x;
};

class c1: public base{
    public:
    int y;
};
class c2: public base{
    public:
    int z;
};
class derived: public c1,public c2{
    public:
    int sum(){
        int sum=c1::x+y+z;
        // cout<<"Sum: "<<c1::x+y+z<<endl;
        return sum;
    }

};
int main(){
    derived obj;
    obj.c1::x=3;
    obj.y=4;
    obj.z=5;
    cout<<"The sum is: "<<obj.sum()<<endl;
    // obj.sum();
}

#include<iostream>
using namespace std;

class Base1
{
public:
    int x,y;
    void data(){
        cout<<"Enter 2 nums: ";
        cin>>x>>y;
    }
};
class derivedc1: public Base1{
    public:
    void product(){
        cout<<"Product: "<<x*y<<endl;
    }
};
class derivedc2: public Base1{
    public:
    void sum(){
        cout<<"Sum: "<<x+y<<endl;
    }
};
int main(){
    derivedc1 obj1;
    derivedc2 obj2;
    obj1.data();
    obj1.product();
    obj2.data();
    obj2.sum();
    return 0;
}

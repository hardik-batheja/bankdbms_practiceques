#include<iostream>
using namespace std;

class Base1
{
public:
    void print(){
        cout<<"Multilevel Inheritance :)  "<<endl;
    }
};
class derivedc1: public Base1{};
class derivedc2: public derivedc1{};

int main(){
    derivedc2 obj;
    obj.print();
    return 0;
}

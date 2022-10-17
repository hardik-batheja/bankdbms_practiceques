#include<iostream>
using namespace std;
typedef unsigned char BYTE;
class B{};
class D:public B{};

void f(B* pb,D* pd){
    D* pd2=static_cast<D*>(pb);     //Not safe  // all d not in B
    B* pb2=static_cast<B*>(pd);     //Safe      //all B in D
}
int main(){
    return 0;
}
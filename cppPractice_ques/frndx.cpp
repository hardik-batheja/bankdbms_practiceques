#include<iostream>
using namespace std;

// class A{
//     public:
//     int f(){}
// };
class Distance{
    private:
    int meter;
    friend int addfive(Distance);
    public: Distance():meter(2){};
};
int addfive(Distance d){
    d.meter+=5;
    return d.meter;
}
int main(){
    Distance d;
    cout<<"Dis: "<< addfive(d);
    return 0;
}
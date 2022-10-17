#include<iostream>
using namespace std;
class Conclass{
    public:
        int size;
        Conclass(){
            size=100;
        }
};
int main(){
    const Conclass c;
    cout<<"Line size is: "<<c.size<<" cm\n";
    // try{
        // c.size=90;
    // }
    // catch(...){
    //     cout<<"Unable to change current value: "<<c.size<<" cm";
    // }
    cout<<"current value: "<<c.size<<" cm";
    return 0;
}
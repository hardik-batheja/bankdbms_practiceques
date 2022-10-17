#include<iostream>
using namespace std;
class Line{
    public:
        int size;
        Line(){
            size=30;
        }
};
int main(){
    Line l;
    cout<<"Line size is: "<<l.size<<" cm";
    return 0;
}
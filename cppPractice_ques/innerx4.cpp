#include<iostream>
using namespace std;
class normal{
    public:
    int x,y;
    normal(){x=10,y=15;}
};
int main(){
    normal op;
    cout<<op.x<<endl<<op.y<<endl;
    return 0;
}
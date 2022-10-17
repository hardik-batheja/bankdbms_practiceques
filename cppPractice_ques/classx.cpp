#include<iostream>
using namespace std;
class Myclass{
    public:
    // private:
        int myNum;
        string mystr;
};
int main(){
    Myclass myobj;
    myobj.myNum=15;
    myobj.mystr="XYZ";
    cout<<myobj.myNum<<endl<<myobj.mystr;
    return 0;
}
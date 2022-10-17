#include<iostream>
using namespace std;
class ABC{
    private:
        int x,y;
    public:
        ABC(){
            x=1,y=1;
        }
        ABC(int a){
            x=y=a;
        }
        ABC(int a,int b){
            x=a;
            y=b;
        }
        void display(){
            cout<<"Area for L="<<x<<" and B="<<y<<" is "<<x*y<<endl;
        }
};
int main(){
    ABC cc1;
    ABC cc2(10);
    ABC cc3(10,20);
    cc1.display();
    cc2.display();
    cc3.display();
    return 0;
}
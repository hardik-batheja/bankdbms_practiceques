#include<iostream>
using namespace std;
class rectangle{
    private:
        int l,b;
        rectangle(){
            l=10;
            b=20;
            cout<<"created\n";
        }
        void print(){
            cout<<"printed"<<endl;
        }
    public:
    void display(){
        cout<<"val:\t"<<l*b<<endl;
    }
    static rectangle fun(){
        static rectangle r;
        cout<<"initial value:";
        r.display();
        r.l++;
        // r.print();
        // cout<<"hello\n";
        return r;
    }
};
int main(){
    rectangle rt = rectangle::fun();
    cout<<"updated ";
    rt.display();
    rt=rectangle::fun();
    cout<<"updated ";
    rt.display();
    return 0;
}
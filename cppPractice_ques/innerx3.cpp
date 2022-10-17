#include<iostream>
#include<string.h>
using namespace std;

class Pingable{
    public:
    virtual void ping()=0;
};

void callping(Pingable& p){
    p.ping();
}

class bingable{
    public:
    virtual void bing()=0;
};

void callbing(bingable& b){
    b.bing();
}

class outer{
    private:
    string name;
    class inner1;
    // friend class outer::inner1;
    class inner1: public Pingable{
        outer *parent;
        public:
        inner1(outer *p):parent(p){}
        void ping(){
            cout<<"ping called for "<<parent->name<<endl;
        }
    } inner1;
    class inner2;
    friend class outer::inner2;
    class inner2: public bingable{
        outer *parent;
        public:
        inner2(outer *p):parent(p){}
        void bing(){
            cout<<"bing called for "<<parent->name<<endl;
        }
    } inner2;
    public:
    outer(const string& nm) : name(nm),inner1(this),inner2(this){}
    operator Pingable&(){return inner1;}
    operator bingable&(){return inner2;}
};

int main(){
    outer x("Ping pong");
    callping(x);
    callbing(x);
}
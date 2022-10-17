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
    string name;
};

int main(){
    outer::inner i;
    i.display();
    outer
}
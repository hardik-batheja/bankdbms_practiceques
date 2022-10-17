#include<iostream>
using namespace std;
class car{
    public:
    virtual void Start()=0;
    virtual void Stop()=0;
    void Horn(){
        cout<<"blow horn"<<endl;
    }
};

class Innova: public car{
    public:
    void Start(){
        cout<<"Innova started."<<endl;
    }
    void Stop(){
        cout<<"Innova Stopped."<<endl;
    }
};
class Swift: public car{
    public:
    void Start(){
        cout<<"Swift started."<<endl;
    }
    void Stop(){
        cout<<"Swift Stopped."<<endl;
    }
};

int main(){
    car *c = new Innova();
    c->Start();
    c->Stop();
    c->Horn();
    c=new Swift();
    c->Start();
    c->Stop();
    return 0;
}
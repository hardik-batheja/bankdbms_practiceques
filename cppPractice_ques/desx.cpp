#include<iostream>
using namespace std;
int count=0;
class Test
{
public:
    Test(){
        count++;
        cout<<"\n No. of object created."<<count<<endl;
    }
    ~Test(){
        cout<<"\n No. of object destroyed."<<count<<endl;
        count--;
    }
};
int main(){
    Test t,t1,t2,t3;
    return 0;
}
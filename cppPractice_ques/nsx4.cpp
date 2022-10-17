#include <iostream>
using namespace std;

namespace multiply{
    int mfn(int x,int y){return x*y;}
}
namespace add{
    int fn(int x,int y){ return multiply::mfn(x,y)+y;}
}
int main(){
    int x,y;
    cout<<"enter 2 nums: "<<endl;
    cin>>x>>y;
    {
    using namespace multiply;
    cout<<"multiply ";
    cout<<mfn(x,y)<<endl;
    }
    {
    using namespace add;
    cout<<"added y to multiple of x,y  "<<fn(x,y)<<endl;
    }
}
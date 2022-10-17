#include <iostream>
using namespace std;

namespace add{
    int fn(int x,int y){return x+y;}
}
namespace multiply{
    int fn(int x,int y){return x*y;}
}
namespace sub{
    int fn(int x,int y){return x-y;}
}
namespace divi{
    int fn(int x,int y){return x/y;}
}

int main(){
    int x,y;
    cout<<"enter 2 nums: "<<endl;
    cin>>x>>y;
    {
    using namespace add;
    cout<<"add  "<<fn(x,y)<<endl;
    }
    {
    using namespace multiply;
    cout<<"multiply ";
    cout<<fn(x,y)<<endl;
    }
    {
    using namespace sub;
    cout<<"sub  "<<fn(x,y)<<endl;
    }
    {
    using namespace divi;
    cout<<"div  "<<fn(x,y)<<endl;
    }
    
}
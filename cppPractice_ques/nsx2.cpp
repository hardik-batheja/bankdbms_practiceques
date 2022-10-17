#include <iostream>
using namespace std;


namespace first{
    int x=3;
    int y=10;
}

namespace second{
    double x=3.1416;
    double y=2.7183;
}

int main(){
    {
    using namespace first;
    cout<<x<<'\n';
    cout<<y<<'\n';
    }
    {
        using namespace second;
        cout<<x<<'\n';
        cout<<y<<'\n';
    }
    return 0;

}

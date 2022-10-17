#include <iostream>
using namespace std;
namespace foo{
    int value(){return 5;}
}
namespace bar{
    const double pi=3.1416;
    double value(){return 2*pi;}
}

namespace first{
    int x=3;
    int y=10;
}

namespace second{
    double x=3.1416;
    double y=2.7183;
}

int main(){
    cout<<'Example 1:'<<foo::value()<<'\n';
    cout<<bar::value()<<'\n';
    cout<<bar::pi<<'\n';
    using first::x;
    using second::y;
    cout<<'Example 2:'<<x<<'\n';
    cout<<y<<'\n';
    cout<<second::x<<'\n';
    cout<<second::y<<'\n';
    using namespace first;
    cout<<x<<'\n';
    cout<<y<<'\n';

    return 0;

}

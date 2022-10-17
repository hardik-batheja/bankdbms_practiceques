#include <iostream>
#include <iterator>
#include<set>
#include <list> // for std::list elements
using namespace std;
int main()
{
    set<string>str_set{"iphone","android","basic"};
    set<char>chr_set{'a','b','c'};
    set<int>int_set{1,2,3,4};
    for(auto kt=str_set.begin();kt!=str_set.end();kt++)
        cout<<','<<*kt;
        for(auto kt=chr_set.begin();kt!=chr_set.end();kt++)
        cout<<','<<*kt;
        for(auto kt=int_set.begin();kt!=int_set.end();kt++)
        cout<<','<<*kt;
        return 0;
}
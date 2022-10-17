#include <iostream>
#include <iterator>
#include<set>
#include <list> // for std::list elements
using namespace std;
int main()
{
    set<string>strng_set{"iphone","android","basic"};
    set<char>chr_set{'a','b','c','d'};
    set<int>int_set{1,2,3,4,5};
    for(int i=0;i<4;i++)
        int_set.insert('a'+1);
    cout<<"strng_set size: "<< strng_set.size()<<endl;
    cout<<"strng_set size: "<< chr_set.size()<<endl;
    return 0;
}
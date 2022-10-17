#include <iostream>
#include <iterator>
#include<set>
#include <list> // for std::list elements
using namespace std;
int main()
{
    set<int> s={10,12,15,6};
    set<int>::iterator it;
    cout<<"First element is: "<<*(s.begin());
    cout<<"\nLast element is: "<<*--(s.end())<<endl;
    for(auto it=s.begin();it!=s.end();it++)
        cout<<"    "<<*it;
    cout<<endl;
    if(s.empty())
    cout<<"Empty\n";
    else
    cout<<"Not Empty.\n";
    cout<<"\nSize of the set: "<<s.size();
    cout<<"\nMax Size: "<<s.max_size();
    s.erase(s.begin());
    s.erase(12);
    cout<<"\nAfter removing the first element and the element 12: ";
    for(auto it=s.begin();it!=s.end();it++)
        cout<<"  "<<*it;
    s.insert(5);
    cout<<"\nAfter inserting the new element 5: ";
    for(auto it=s.begin();it!=s.end();it++)
        cout<<"  "<<*it;
    if(s.count(15)==1)
    cout<<"\n15 is present in the set";
    else
    cout<<"\nSet is not empty.\n";
    return 0;
    s.clear();
    if(s.empty())
    cout<<"\nNow, the set is empty.";
    else
    cout<<"\nSet is not empty.";
    return 0;
}
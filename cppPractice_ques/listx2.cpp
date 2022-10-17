#include<iostream>
#include<iterator>
#include<list>
using namespace std;

void ShowTheContent(list<int> l){
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++)
    cout<<*it<<"    ";
    cout<<"\n";
}
int main(){
    list<int> list1,list2;
    int i;
    for(i=0;i<10;i++)
    list1.push_back(i+1);
    for(i=0;i<10;i++)
    list2.push_back(i+1);
    cout<<"Content of List 1 : ";
    ShowTheContent(list1);
    cout<<"Content of List 2 : ";
    ShowTheContent(list2);

    list2.sort();
    cout<<"Sorted List 2 :     ";
    ShowTheContent(list2);

    int times=5;
    while (times--)
    {
        list1.pop_front();
    }
    cout<<"Content of List 1: ";
    ShowTheContent(list1);
    times=5;
    while (times--)
    {
        list2.pop_back();
    }
    cout<<"Content of List 2: ";
    ShowTheContent(list2);
    cout<<list1.front()<<" is now at the front in list 1\n";
    cout<<list2.back()<<" is now the last element in list 2\n";

    list1.insert(list1.begin(),5,10);
    cout<<"After Insertion list 1:     ";
    ShowTheContent(list1);

    list2.insert(list1.begin(),55,110);
    cout<<"After Insertion list 2:    ";
    ShowTheContent(list2);

    list1.remove(10);
    cout<<"After removal list 1:      ";
    ShowTheContent(list1);

    cout<<"No. of elements in list 1: ";
    cout<<list1.size()<<"\n";
    
    list2.reverse();
    cout<<"Reversed list 2:           ";
    ShowTheContent(list2);

    list2.erase(list2.begin());
    cout<<"After erasing from list 2: ";
    ShowTheContent(list2);

    list1.clear();
    if(list1.empty())
    cout<<"List 1 is now empty\n";
    else
    cout<<"Not Empty";

    list1.assign(5,2);
    cout<<"List 1:                      ";
    ShowTheContent(list1);

    return 0;
}
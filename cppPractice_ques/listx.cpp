#include<iostream>
#include<iterator>
#include<list>
using namespace std;

void print(list<int> lst){
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();++it)
        cout<<*it<<" ";
    cout<<"\n";
}
int main(){
    list<int> list1,list2;
    for(int i=0;i<5;i++){
        list1.push_back(i+1);
        list2.push_back(i+10);
    }
    cout<<"\nList1 (list1) is : ";
    print(list1);
    cout<<"\nList2 (list2) is : ";
    print(list2);
    cout<<"\nlist1.front() : "<< list1.front();
    cout<<"\n\nlist1.back() : "<< list1.back();

    cout<<"\n\nlist2.pop_front() : ";
    list1.pop_front();
    print(list1);
    cout<<"\nlist2.pop_back() : ";
    list2.pop_back();
    print(list2);

    cout<<"\nlist1.reverse() : ";
    list1.reverse();
    print(list1);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> a;
    for(int i=0;i<10;i++){
        a.push_back(i+1);
    }
    cout<<"\nRefrence operator [g] : a[2] = "<<a[2];
    cout<< "\nat : a.at(4) = "<<a.at(4);
    cout<<"\nfront() : a.front() = "<<a.front();
    cout<<"\nback() : a.back() = "<<a.back();
    int* pos =a.data();
    cout<<"\nThe first element is "<<*pos++;
    cout<<"\nThe second element is "<<*pos;
    return 0;
}
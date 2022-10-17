#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> a;
    for(int i=0;i<3;i++){
        a.push_back(i+3);
    }
    cout<<"Size: "<<a.size();
    cout<<"\nCapacity : "<<a.capacity();
    cout<<"\nMax_Size: "<<a.max_size();
    a.resize(4);
    cout<<"\nSize: "<<a.size();
    if(a.empty()==false){
        cout<<"\nVector is not empty";
    }
    else{
        cout<<"\nVector is empty";
    }
    return 0;
}
#include<map>
#include<string>
#include<iostream>
using namespace std;

int main(){
    map<int, map<int,string>> nested_map;
    nested_map[1][1]="one";
    cout<<nested_map[1][1]<<endl;
    return 0;
}
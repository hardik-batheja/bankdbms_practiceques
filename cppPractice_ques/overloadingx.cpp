#include<iostream>
using namespace std;

int function(double){
    cout<<"type - decimal."<<endl;
    return 0;
}

int function(int){
    cout<<"type - int."<<endl;
    return 0;
}

int main(){
    function(1.0);
    function(1);
    function(1.0f);
    function(1);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> num{1,2,3,4,5};
vector<int>::iterator it;

    for(it=num.begin();it!=num.end();++it){
        cout<<*it<<"    ";
    }

    return 0;
}
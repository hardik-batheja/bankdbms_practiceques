#include<iostream>
#include<vector>
using namespace std;
#define row 3
#define col 3
int main(){
vector<vector<int>> a;
int num=8;
for(int i=0;i<row;i++){
    vector<int> a1;
    for(int j=0;j<col;j++){
        a1.push_back(num);
        num+=4;
    }
    a.push_back(a1);
}
cout<<"2D vector contains:\n";
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<a[i][j]<<"    ";
    }
    cout<<"\n";
}
a[2].pop_back();
a[1].pop_back();

cout<<"2D vector contains:\n";
for(int i=0;i<a.size();i++){
    for(auto j=a[i].begin();j!=a[i].end();j++){
        cout<<*j<<"    ";
    }
    cout<<"\n";
}

    return 0;
}
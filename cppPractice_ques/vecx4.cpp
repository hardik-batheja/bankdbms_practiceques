#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int> num{1,2,3,4,5};
vector<int>::iterator it;
it=num.begin();
cout<<"num[0] = "<<*it<<endl;

return 0;
}
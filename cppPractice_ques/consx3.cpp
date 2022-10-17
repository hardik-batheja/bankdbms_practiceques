#include<iostream>
#define E 4
using namespace std;
class Test{
    int m,n;
    public:
        Test(){}
        Test(int m,int n){
            // cout<<this->m<<endl;
            this->m=m;
            this->n=n;
        }
        void print(){
            cout<<m<<" "<<n<<endl;
        }
};
int main(){
    Test* arr=new Test[E];
    for(int j=0;j<E;j++){
        arr[j]=Test(j,j+1);
    }
    for(int j=0;j<E;j++){
        arr[j].print();
    }
    return 0;
}
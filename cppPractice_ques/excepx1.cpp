#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a=6;
    cout<<a<<endl;
    int b=2;
    try{
        if (b==0)
            throw b;
        int x=a/b;
        cout<<x<<endl;
    }
    catch(float ex){
        cout<<"Error caught."<<endl;
    }
    // catch(int ex){
    //     cout<<"Error2 caught."<<endl;
    // }
    catch(...){
        cout<<"Default exception"<<endl;
    }
    cout<<"The End."<<endl;
    return 0;
}
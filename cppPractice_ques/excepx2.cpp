#include<iostream>
#include<conio.h>
using namespace std;

void test(int x){
    try{
        if(x>0)
        throw x;
        else
        throw 's';
    }
    catch (int x){
        cout<<"Catch a integer "<<x<<endl;
    }
    catch (char x){
        cout<<"Catch a char "<<x<<endl;
    }
}

int main(){
    cout<<"testing \n";
    test(10);
    test(0);
    getch();
    return 0;
}
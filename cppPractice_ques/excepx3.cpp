#include<iostream>
#include<exception>
using namespace std;

struct MyException:public exception{
    const char * what() const throw(){
        return "C++ Exception";
    }
};
int main(){
    try{
        throw MyException();
        throw exception();
    } catch(MyException& e) {
        cout<<"MyException caught "<<endl;
        cout<<e.what()<<endl;
    } catch(exception& e) {
        cout<<"others \n";
    }
}
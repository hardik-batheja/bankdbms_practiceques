#include<iostream>
using namespace std;

class World{
    public:
    World(){
        cout<<"This is world\n";
    }
};
class Continent: public World{
    public:
    Continent(){
        cout<<"this is continent;\n";
    }
};
class Country{
    public:
    Country(){
        cout<<"this is country\n";
    }
};
class India: public Continent,public Country{
    public:
    India(){
        cout<<"this is India;\n";
    }
};
int main(){
    India myworld;
    return 0;
}
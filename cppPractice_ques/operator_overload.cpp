#include <iostream>
using namespace std;
class complx
{
public:
    double real, imag;
    complx(double real = 0., double imag = 0.);
    complx operator+(const complx &) const;
};
complx::complx(double r, double i)
{
    real = r;
    imag = i;
    cout << " real=" << real << " imag=" << imag << endl;
}
complx complx::operator+(const complx &c) const
{
    complx result;
    result.real = (this->real + c.real);
    result.imag = (this->imag + c.imag);
    return result;
}
int main()
{
    complx x(4, 4);
    complx y(4, 4);
    
    complx z = x + y;
    cout << "z.real=" << z.real << " z.imag=" << z.imag;
    return 0;
}
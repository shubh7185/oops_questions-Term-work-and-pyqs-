#include<iostream>
using namespace std;
class complex 
{
    public:
    int real;
    int imag;
    complex operator+(complex x)
    {
        complex temp;
        temp.real=real+x.real;
        temp.imag=imag+x.imag;
        return temp;
    }
};

int main()
{
    complex c1 , c2 , c3;
    c1.real=20;
    c1.imag=30;
    c2.real=20;
    c2.imag=30;
    c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.imag<<endl;
}

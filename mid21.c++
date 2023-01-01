#include<iostream>
using namespace std;

class complex 
{
    public:
    int real;
    int imag;
    complex(){}
    complex(int r , int i)
    {
        real=r;
        imag=i;
    }

    complex operator-(complex x)
    {
        complex temp;
        temp.real=real - x.real;
        temp.imag=imag - x.imag;
        return temp;
    }
};


int main()
{
complex c1(20, 30);
complex c2(20, 30);
complex c3;
c3=c1-c2;
cout<<c3.real<<"-i"<<c3.imag;

}
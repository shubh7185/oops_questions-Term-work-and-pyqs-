#include<iostream>
using namespace std;

class complex 
{
    public:
    int real;
    int imag;
    complex()
    {}
    complex(int r , int i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<real<<"+i"<<imag;
    }
    friend complex operator+(complex c1 , complex c2);
};

complex operator+(complex c1 , complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c2.imag+c2.imag;
    return temp;
}

int main()
{
    complex c1(20 , 30);
    complex c2(20,30);
    complex c3;
    c3=c1+c2;
    c3.display();
}
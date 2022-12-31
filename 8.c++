#include<iostream>
using namespace std;

class complex
{
    public:
    int real;
    int imaginary;
        complex()
    {
        real = 0  ;
        imaginary = 0 ;
    }
    complex(int r , int i)
    {
        real = r  ;
        imaginary = i ;
    }
    friend complex operator+(complex c1 , complex c2);
};

complex operator+(complex c1 , complex c2)
{
    complex temp;
    temp.real= c1.real + c2.real;
    temp.imaginary= c1.imaginary + c2.imaginary;
    return temp;
};

int main()
{
    complex c1 (10,20);
    complex c2 (10,20);
    complex  c3;
    c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.imaginary;
}

#include<iostream>
using namespace std;
class complex
{
    public:
    int real ;
    int imaginary;
    complex()
    {
        real=0;
        imaginary=0;
    }
    complex(int r , int i)
    {
        real=r;
        imaginary=i;
    }
    complex operator+(complex x)
    {
        complex temp;
        temp.real= real + x.real;
        temp.imaginary= imaginary + x.imaginary;
    }


};

int main()
{
    complex c1(10,20);
    complex c2(10,20);
    complex c3;
    c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.imaginary;
}
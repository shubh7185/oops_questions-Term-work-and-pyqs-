#include<iostream>
using namespace std;

class rectangle
{
    private:
    int length;
    int breadth;
    public:
    rectangle()
    {
        length=0;
        breadth=0;
    }
    rectangle(int l , int b)
    {
        setlength(l);
        setbreadth(b);
    }

    rectangle(rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }

     void setlength(int l)
    {
        length=l;
    }
    void setbreadth(int b)
    {
        breadth = b;

    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }

    int area()
    {
        return length*breadth;
    }

};

int main()
{
    rectangle r1(10 , 20);
    cout<<r1.area();
}


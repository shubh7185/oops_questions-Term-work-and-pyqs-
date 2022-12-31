#include<iostream>
using namespace std;

class shape
{
    public:
    int d1 , d2;
    void getdata( int daat1 , int data2)
    {
       d1=daat1;
       d2=data2;
    }
    virtual void  display_area()
    {
        return ;
    }
};

class triangle :public shape
{
    public:
    int area;
    void display_area()
    {
        area = 0.5*d1*d2;
        cout<<area <<endl;
    }
};

class rectangle :public shape
{
    public:
    int area;
    void display_area()
    {
        area=d1*d2;
        cout<<area<<endl;
    }
};

int main()
{
    triangle t;
    t.getdata(1,2);
    t.display_area();
    rectangle r;
    r.getdata(3,4);
    r.display_area();
}


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
        length=l;
        breadth=b;
    }
    rectangle(rectangle &r)
    {
        length=r.length;
        breadth = r.breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter();
};

int rectangle::perimeter()
{
    return length*breadth;
}

int main()
{
    rectangle r(10,20);
    cout<<r.area();
    cout<<r.perimeter();

}


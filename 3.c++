#include<iostream>
using namespace std;
// create an object in heap
class rectangle 
{
    public :
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};


int main()
{
    rectangle *r;
    r= new rectangle;
    r->length=10;
    r->breadth=20;
    cout<<r->area();
}
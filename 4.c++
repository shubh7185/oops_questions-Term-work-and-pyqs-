#include<iostream>
using namespace std;
// data hiding
class rectangle
{
    private:
    int length ; 
    int breadth;
    public:
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
    int display()
    {
        return length*breadth;
    }
};
int main()
{
    rectangle r1;
    r1.setbreadth(10);
    r1.setlength(20);
    // cout<<r1.getbreadth()*r1.getlength();
    cout<<r1.display();
}

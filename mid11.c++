#include<iostream>
using namespace std;

class mammals
{
    public:
    void display()
    {
        cout<<"I am a mammal";
    }
};

class marineanimals
{
    public:
    void display1()
    {
        cout<<"i am a marine animals: ";
    }
};

class bluewhale : public mammals , public marineanimals
{
    public:
    void dis()
    {
        cout<<"i am a marine animal and mammal also: ";
    }
};

int main()
{
    mammals m;
    m.display();
    marineanimals m1;
    m1.display1();
    bluewhale b;
    b.dis();
    b.display1();
    b.display();
}


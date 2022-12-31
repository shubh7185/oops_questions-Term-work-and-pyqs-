#include<iostream>
using namespace std;

class base
{
    private:
    int x;
    public:
    void show()
    {
        cout<<"show of x"<<x<<endl;
    }
};

class derived : public base
{
    public:
    int y;
    void display()
    {
        cout<<"display of y"<<y<<endl;
    }
};

int main()
{
    base b;
    b.show();

    derived d;
    d.show();
}

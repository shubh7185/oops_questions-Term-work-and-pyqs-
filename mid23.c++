#include<iostream>
using namespace std;
class weight
{
    private:
    int kg;
    public:
    weight()
    {
        kg-0;
    }
    weight(int k)
    {
        kg=k;
    }
    weight operator ++()
    {
        ++kg;
    }
    weight operator ++(int)
    {
        kg++;
    }
   friend weight operator-(weight &ob);
    void display()
    {
        cout<<"weight in kg: "<<kg<<endl;
    }
};

weight operator-(weight &ob)
{
    ob.kg=-ob.kg;
}

int main()
{
    weight w1(99);
    w1.display();
    ++w1;
    w1.display();
    w1++;
    w1.display();
    -w1;
    w1.display();
}

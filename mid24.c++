#include<iostream>
using namespace std;

class weight
{
    private:
    int kg;
    public:
    weight()
    {
    }
    weight(int k)
    {
        kg=k;
    }
    void display()
    {
        cout<<"weight in kg: "<<kg<<endl;
    }
    friend weight operator++(weight &ob);
};

weight operator++(weight &ob)
{
    ob.kg= ++ob.kg;
}

int main()
{
    weight w(100);
    w.display();
    ++w;
    w.display();
}
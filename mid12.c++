#include<iostream>
using namespace std;
class apples
{
    protected:
    int tapple;
    public:
    void set()
    {
        cout<<"enter the total number of apple: "<<endl;
        cin>>tapple;
    }
    void get()
    {
        cout<<"apple: "<<tapple<<endl;
    }
};
class mangoes
{
    protected:
    int tmangoes;
    public:
    
    void set1()
    {
        cout<<"enter the total number of mangoes: "<<endl;
        cin>>tmangoes;
    }
    void get1()
    {
        cout<<"mangoes: "<<tmangoes<<endl;
    }

};

class fruit : public apples , public mangoes
{
    private:
    int fruits_in_basket;
    public:
    void  calulate()
    {
        fruits_in_basket=tapple + tmangoes;
    }

    void display()
    {
        cout<<"total fruits in basket: "<<fruits_in_basket<<endl;
    }


};


int main()
{
    fruit f;
    f.set();
    f.set1();
    f.get();
    f.get1();
    f.calulate();
    f.display();
}


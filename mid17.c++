#include<iostream>
using namespace std;
class salary
{
    private:
    int sal;
    int tax;
    public:
    salary()
    {
        sal=0;
    }
    salary(int s )
    {
        sal=s;
    }
    void caltax()
    {
        tax=sal*0.1;
    }
    void display()
    {
        cout<<"salary: "<<sal<<endl;
        cout<<"Tax: "<<tax<<endl;
    }
};

int main()
{
    salary s(2500);
    s.caltax();
    s.display();

}
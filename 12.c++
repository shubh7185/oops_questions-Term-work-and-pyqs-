#include<iostream>
using namespace std;
class time
{
    int hr , min , sec;
    public:
    time()
    {
        hr=1;
        min=0;
        sec=0;
    }
    time(int h ,int  m , int  s)
    {
        hr=h;
        min = m ;
        sec = s;
    }

    time operator +(time t2)
    {
        time temp;
        temp.hr=hr+t2.hr;
        temp.min=min+t2.min;
        temp.sec=sec+t2.sec;
        return temp;
    }

    void display()
    {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
};

int main()
{
    time t1(2 , 3 , 60);
    time t2(3,3,30);
    time t3;
    t3=t1+t2;
    t3.display();
}
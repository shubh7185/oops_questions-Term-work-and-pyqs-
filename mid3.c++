#include<iostream>
using namespace std;
class time
{
    private:
    int h;
    int s;
    int m;
    public:
    time()
    {
        h=0;
        s=0;
        m=0;
    }
    time(int hr , int sec , int min)
    {
        h=hr;
        s=sec;
        m=min;
    }
    void add(time x , time y)
    {
        s= x.s + y.s;
        while(s>59)
        {
            s=s-60;
            m++;
        }
        m= m + x.m+y.m;
        while(m>59)
        {
            m=m-60;
            h++;
        }
        h= h + x.h+y.h;
    }

    void display()
    {
        cout<<h<<":"<<m<<":"<<s;
    }
};

int main()
{
    time t1(2,60,60);
    time t2(3,60,60);
    time t3;
    t3.add(t1,t2);
    t3.display();

}
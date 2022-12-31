#include<iostream>
using namespace std;

class time
{
    private:
    int hour;
    int minutes;
    int second;
    public:
    time()
    {
        hour=0;
        minutes=0;
        second=0;
    }
    time(int h , int m , int s)
    {
        hour=h;
        minutes=m;
        second=s;
    }

    void add(time x , time y)
    {
        second=x.second+y.second;
        while(second>59)
        {
            second=second-60;
            minutes++;
        }
        minutes=minutes + x.minutes+y.minutes;
        while(minutes>59)
        {
            minutes=minutes-60;
            hour++;
        }
        hour= hour+ x.hour+y.hour;
    }
    void display()
    {
        cout<<hour<<":"<<minutes<<":"<<second;
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
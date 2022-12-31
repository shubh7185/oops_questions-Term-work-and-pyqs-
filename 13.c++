#include<iostream>
using namespace std;
class time
{
    int hr;
    int minute;
    int sec;
public:
    time(){}
    time(int h,int m,int s)
    {
        hr=h;
        minute=m;
        sec=s;
    }
    void display()
    {
        cout<<hr<<" hours "<<minute<<" minutes "<<sec<<" seconds"<<endl;
    }
    void add(time,time);
};
void time::add(time ob1,time ob2)
{
    minute=ob1.minute+ob2.minute;
    sec=ob1.sec+ob2.sec;
    hr=minute/60;
    minute=(minute%60)+(sec/60);
    sec=sec%60;
    hr=hr+ob1.hr+ob2.hr;
}
int main()
{
    time ob1,ob2,ob3;
    int minute,hr,sec;
    cout<<"\n\n\t\t******INPUT******\n\n"<<endl;
    printf("enter time hour minute sec for object 1\n");
    cin>>hr>>minute>>sec;
    ob1=time(hr,minute,sec);
    printf("enter time hour minute sec for object 2\n");
    cin>>hr>>minute>>sec;
    ob2=time(hr,minute,sec);
    cout<<"\n\t\t******OUTPUT******\n\n"<<endl;
    ob1.display();
    ob2.display();
    ob3.add(ob1,ob2);
    ob3.display();

}

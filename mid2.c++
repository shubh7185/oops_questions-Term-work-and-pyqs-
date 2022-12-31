#include<iostream>
using namespace std;
 class tollbooth
 {
    private:
    int tc;
    double tm;
    public:
    public:
    tollbooth()
    {
        tc=0;
        tm=0;
    }
    tollbooth(int c  , int m)
    {
        tc=c;
        tm=m;
    }
    void payingcar()
    {
        tc++;
        tm=tm+0.5;
    }
    void nonpaycar()
    {
        tc++;
    }
    void display()
    {
        cout<<"total cars: "<<tc<<endl;
        cout<<"total cash collected"<<tm<<endl;
    }
 };

 int main()
 {
    tollbooth t(20 , 2000);

    int ch;
    do
    {
        cout<<"enter the choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            t.payingcar();
            break;
            case 2:
            t.nonpaycar();
            break;
            case 3:
            t.display();
            break;
            default:
            cout<<"invalid choice";
        }

    } while (ch<=3);
    
 }
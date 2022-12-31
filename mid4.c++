#include<iostream>
using namespace std;

class consdemo
{
    public:

    void sumdemo(int a ,  char c)
    {
        if(c == 'p')
        {
            cout<<"square of number: "<<a*a<<endl;
        }
        else
        {
            cout<<"cube of number "<<a*a*a<<endl;
        }
    }
    void sumdemo(int a , int b , char c )
    {
        if(c=='a')
        {
            cout<<"addition"<<a+b<<endl;
        }
        else
        {
            cout<<"ascii" <<int(c)<<endl;
        }

    }

    void sumdemo(string s1 , string s2)
    {
        // compare function gives zero when equal whwn not equal it gives non zero
        if(s1.compare(s2)==0)
        {
            cout<<"strings are equal"<<endl;
        }
        else
        {
            cout<<"strings are not equal";
        }
    }
};

int main()
{
    consdemo c;    
    c.sumdemo(24 , 'p');
    c.sumdemo(24,25,'a');
    c.sumdemo("hello","hello");
}

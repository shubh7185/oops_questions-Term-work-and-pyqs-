#include<iostream>
using namespace std;
class usertwo;
class userone
{
    private:
    string name;
    string fname;
    string mname;
    string gender;
    public:
    void inputinfo()
    {
        cout<<"Enter the name: "<<endl;
        cin>>name;
        cout<<"Enter the father name: "<<endl;
        cin>>fname;
        cout<<"Enter the mother name: "<<endl;
        cin>>mname;
        cout<<"Enter the gender: "<<endl;
        cin>>gender;
    }

    friend void userchecker(userone , usertwo);
};

class usertwo
{
    private:
    string name;
    string fname;
    string mname;
    string gender;
    public:
    void inputinfo()
    {
        cout<<"Enter the name: "<<endl;
        cin>>name;
        cout<<"Enter the father name: "<<endl;
        cin>>fname;
        cout<<"Enter the mother name: "<<endl;
        cin>>mname;
        cout<<"Enter the gender: "<<endl;
        cin>>gender;        
    }   

    friend void userchecker(userone , usertwo); 

};

    void userchecker(userone x , usertwo y)
    {
        if((x.fname==y.fname)&&(x.mname==y.mname))
        {
            cout<<"Belongs to same family"<<endl;
            cout<<"we are brothers"<<endl;
        }
        else
        {
            cout<<"not belongs to same family"<<endl;
        }
    }


int main()
{
    userone u1;
    u1.inputinfo();
    usertwo u;
    u.inputinfo();

    // we can acccess friend function withod using an objetc
    userchecker(u1 , u);
}
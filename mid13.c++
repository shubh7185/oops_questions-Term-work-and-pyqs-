// doubt

#include<iostream>
using namespace std;
class Marks
{
    
    public:
    int mark;
    string name;
    int rn;
    void set(string name , int rn)
    {
        this->name=name;
        this->rn=rn;
    }

};

class phy : public Marks
{
    public:
    phy()
    {
    }
    phy(int mark)
    {
        this->mark=mark;
    }
};

class chem : public Marks
{
    public:
    chem()
    {
    }
    chem(int mark)
    {
        this->mark=mark;
    }
};

class math : public Marks
{
    public:
    math(){}
    math(int mark)
    {
        this->mark=mark;
    }
};

int main()
{
    
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    Marks m[n];
    phy p[n];
    math ma[n];
    chem chemis[n];
    string name;
    int marks , sum, avg;
    sum=0;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the name of student:  "<<endl;
        getline(cin,name);
        m->set(name , i+1);
        cin.ignore();
        cout<<"Enter the marks in chem subject: "<<marks<<endl;
        cin>>marks;
        chemis[i] = chem(marks);
        cout<<"Enter the marks in phy subject: "<<marks<<endl;
        cin>>marks;
        p[i] = phy(marks);
        cout<<"Enter the marks in math subject: "<<marks<<endl;
        cin>>marks;
        ma[i] = math(marks);
    }


    for(int i=0;i<n;i++)
    {
        sum = sum + m[i].mark + chemis[i].mark + p[i].mark;
        cout<<"Sum"<<sum<<endl;
    }

}
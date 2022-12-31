#include<iostream>
using namespace std;

class student
{
    private:
    int age;
    string name;
    int en;
    int marks;
    public:
    void setinfo()
    {
        cout<<"Enter the age: "<<endl;
        cin>>age;
        cin.ignore();
        cout<<"Enter the name: "<<endl;
        getline(cin,name);
        cout<<"Enter the enroll number: "<<endl;
        cin>>en;
        cout<<"Enter the marks: "<<endl;
        cin>>marks;
    }

    void display()
    {
        cout<<"age: "<<age<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"enroll number: "<<en<<endl;
        cout<<"marks: "<<marks<<endl;

    }
};

class faculty
{
    private:
    string fname;
    int fcode;
    int salary;
    int exp;
    int age;
    public:
    void info()
    {
        cout<<"faculty code: "<<endl;
        cin>>fcode;
        cout<<"faculty salary: "<<endl;
        cin>>salary;
        cin.ignore();
        cout<<"faculty name: "<<endl;
        getline(cin,fname);
        cout<<"faculty exp;: "<<endl;
        cin>>exp;
        cout<<"faculty age: "<<endl;
        cin>>age;

    }

    void display()
    {
        cout<<"faculty name: "<<fname<<endl;
        cout<<"faculty code: "<<fcode<<endl;
        cout<<"faculty salary: "<<salary<<endl;
        cout<<"faculty exp;: "<<exp<<endl;
        cout<<"faculty age: "<<age<<endl;
    }

};

class person : public student , public faculty
{
    public:
    void information()
    {
        student::display();
        faculty::display();
    }
};

int main()
{
    person p;
    p.setinfo();
    p.info();
    p.information();
}
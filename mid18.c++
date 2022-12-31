#include<iostream>
using namespace std;
class test1
{
    protected:
    string fname;
    public:
    void inputfirstname()
    {
        cout<<"Enter the first name: "<<endl;
        getline(cin,fname);

    }

};

class test2
{
    protected:
    string lname;
    public:
    void inputlastname()
    {
        cout<<"Enter the last name: "<<endl;
        getline(cin,lname);
    }
};

class test3 : public test1 , public test2
{
    private:
    string name;
    public:
    void mergename()
    {
        name = fname.append(lname);

    }
    void showname()
    {
        cout<<"full name: "<<name<<endl;
    }
};

int main()
{
    test3 t;
    t.inputfirstname();
    t.inputlastname();
    t.mergename();
    t.showname();
}
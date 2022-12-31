#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;
    string name;
};

class sports : virtual public student
{
    protected:
    int sp1;
    int sp2;
    int sp3;
};

class academic : virtual public student
{
    protected:
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;

};

class result :  public academic , public sports
{
    private:
    int total_marks;

    public:
    void total()
    {
        total_marks= sp1+sp2+sp3+m1+m2+m3+m4+m5;
        cout<<"total: "<<total_marks<<endl;

    }

    void display()
    {
        cout<<"student rollno: "<<roll_no;
        cout<<"student name: "<<name;
        cout<<"student total marks: "<<total_marks<<endl;
    }
};

int main()
{
    result s;
    s.roll_no
}
#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;
    string name;

    public:
    // student()
    // {
    //     roll_no=0;
    //     name="";
    // }
    // student(int rn , string n)
    // {
    //     roll_no=rn;
    //     name=n;
    // }

    void studentinfo()
    {
        cout<<"Enter the student details: "<<endl;
        cin>>roll_no;
        cin.ignore();
        getline(cin,name);
    }
};

class sports : virtual public student
{
    protected:
    int sp1;
    int sp2;
    int sp3;
    public:
    // sports()
    // {
    //     sp1=0;
    //     sp2=0;
    //     sp3=0;
    // }
    // sports(int s1 , int s2 , int s3)
    // {
    //     sp1=s1;
    //     sp2=s2;
    //     sp3=s3;
    // }

    void sportsmarks()
    {
        cout<<" Enter Sports marks: "<<endl;
        cin>>sp1;
        cin>>sp2;
        cin>>sp3;
    }
};

class academic : virtual public student
{
    protected:
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    public:
    // academic()
    // {
    //     m1=0;
    //     m2=0;
    //     m3=0;
    //     m4=0;
    //     m5=0;
    // }
    // academic(int marks1,int marks2,int marks3,int marks4,int marks5)
    // {
    //     m1=marks1;
    //     m2=marks2;
    //     m3=marks3;
    //     m4=marks4;
    //     m5=marks5;
    // }

    void marks()
    {
        cout<<"Enter marks: "<<endl;
        cin>>m1;
        cin>>m2;
        cin>>m3;
        cin>>m4;
        cin>>m5;

    }

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
    result r;
    r.studentinfo();
    r.sportsmarks();
    r.marks();
    r.total();
    r.display();
}
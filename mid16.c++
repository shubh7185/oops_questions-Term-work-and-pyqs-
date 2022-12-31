#include<iostream>
using namespace std;

class students
{
    private:
    int age;
    string name;
    int roll_no;
    public:
    students()
    {
        age=0;
        name="";
        roll_no=0;
    }
    students(int a , int rn,  string  n )
    {
        age=a;
        name=n;
        roll_no=rn;
    }
    void display()
    {
        cout<<"Age: "<<age<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<roll_no<<endl;
    }
};

int main()
{
    int r , a;
    string nm;
    int n;
    cout<<"Enter the number of students data you want: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter age: "<<endl;
        cin>>a;
        cout<<"Enter roll number: "<<endl;
        cin>>r;
        cin.ignore();
        cout<<"Enter the name: "<<endl;
        cin>>nm;
        students s(a,r,"nm");
        s.display();
    }

}
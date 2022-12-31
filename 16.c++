// Create a class called Student that contains the data members like age, name, enroll_no, marks. 
// Create another class called Faculty that contains data members like facultyName, 
// facultyCode, salary, deptt, age, experience, gender.
//  Create the function display() in both the classes to display the respective information.
//   The derived Class Person demonstrates multiple inheritance. The
// // program should be able to call both the base classes and displays their information.
//  Remove the ambiguity (When we have exactly same variables or same methods in both the base classes, 
// which one will be called?) by proper mechanism.
#include<iostream>
using namespace std;
class student
{
private:
int age ;
string name;
int enrool_no;
int marks;
public:
void setinfo()
{
    cout<<"Enter the details of student: "<<endl;
    getline(cin,name);
    cin>>age;
    cin>>enrool_no;
    cin>>marks;
}
void display()
{
cout<<name<<endl;
cout<<age<<endl;
cout<<enrool_no<<endl;
cout<<marks<<endl;
}
};

class faculty
{
    private:
    string facname;
    int faccode;
    int salary;
    int age;
    int exp;
    public:
    void setdata()
    {
        cout<<"Enter the data of faculty : "<<endl;
        cin>>salary;
        cin>>age;
        cin>>exp;
        cin>>faccode;
        cin.ignore();
        getline(cin,facname);
    }
    void display()
    {
        cout<<salary<<endl;
        cout<<age<<endl;
        cout<<exp<<endl;
        cout<<faccode<<endl;
        cout<<facname<<endl;
    }
};

class person : public student ,   public faculty
{
    public:
    void show()
    {
        student::display();
        faculty::display();
    }
};

int main()
{
    person p;
    p.setinfo();
    p.setdata();

    p.show();


}
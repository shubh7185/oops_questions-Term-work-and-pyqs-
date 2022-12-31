#include<iostream>
using namespace std;

class employee
{
    private:
    string name;
    string dept;
    int id , bsalary; 
    float salary , hra , da , ta , misc;
    public:
    void set()
    {
        cout<<"Enter the dept: "<<endl;
        cin>>dept;
        cout<<"Enter the id: "<<endl;
        cin>>id;
        cout<<"Enter the salary: "<<endl;
        cin>>bsalary;
        cin.ignore();
        cout<<"Enter the name: "<<endl;
        getline(cin,name);

        hra = bsalary*0.15;
        da = bsalary*0.01;
        ta = bsalary*0.05;
        salary=hra+da+ta;
    }

    void getdata()
    {
        cout<<"id : "<<id<<endl;
        cout<<"salary: "<<salary<<endl;
        cout<<"name : "<<name<<endl;
        cout<<"dept : "<<dept<< endl;
    }
    int getid()
    {
        return id;
    }

};

int main()
{
    int i , n;
    cout<<"enter the value of n: "<<endl;

    scanf("%d",&n);
    employee e[n];
    int id;

    for(int i=0;i<n;i++)
    {
        e[i].set();
    }
    for(int i=0;i<n;i++)
    {
        e[i].getdata();
    }
    cout<<"enter the employee id you wnat to search: "<<endl;
    cin>>id;
    for(int i=0;i<n;i++)
    {
        if(e[i].getid()==id)
        {
            e[i].getdata();
        }
    }
}

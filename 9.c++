#include<iostream>
using namespace std;
class bankaccount
{
    private:
    string name;
    string acctype;
    int accnumber;
    int balanceamt;
    public:
    bankaccount()
    {
        name=" ";
        acctype = " ";
        accnumber=0;
        balanceamt=0;
    }
    void initialize(string n , string type , int an , int ba)
    {
        name=n;
        acctype=type;
        accnumber=an;
        balanceamt=ba;
    }

    void deposit(int dp)
    {
        balanceamt = balanceamt + dp;
    }
    void withdraw(int wm)
    {
        if(balanceamt>=10000)
        {
            balanceamt=balanceamt-wm;
        }
        else
        {
            cout<<"not enough money to withdraw";
        }
    }

    void display()
    {
        cout<<"name: "<<name;
        cout<<"acctype: "<<acctype;
        cout<<"balance amount: "<<balanceamt;
    }
};

int main()
{
    string name , acctype ;
    int accnum;
    int balanceamt;
    int depositamt;
    int withdrawlamt;

    cout<<"Enter the name: "<<endl;
    getline(cin,name);

    cout<<"Enter the account type"<<endl;
    getline(cin,acctype);

    cout<<"Enter the account number: "<<endl;
    cin>>accnum;

    cout<<"Enter the balance amount"<<endl;
    cin>>balanceamt;

    cout<<"Enter the deposit amount: "<<endl;
    cin>>depositamt;

    cout<<"Enter the withdrwal amount: "<<endl;
    cin>>withdrawlamt;


    bankaccount b1;
    b1.initialize(name,acctype,accnum,balanceamt);
    b1.deposit(depositamt);
    b1.withdraw(withdrawlamt);
    b1.display();

    


}
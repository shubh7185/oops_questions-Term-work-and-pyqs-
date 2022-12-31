#include<iostream>
using namespace std;

class toolbooth
{
    private:
    unsigned int  total_cars;
    double total_amt;
    public:
    toolbooth()
    {
        total_cars=0;
        total_amt=0.00;
    }
    void payingcar(int c , double amt)
    {
        total_cars=c;
        total_amt =  amt;
        total_cars++;
        total_amt=total_amt+0.5;
    }

    void nonpayingcar()
    {
        total_cars++;
    }

    void display()
    {
        cout<<"total number of cars: "<<total_cars;
        cout<<"total amount of cars: "<<total_amt;
    }
};
int main()
{
    toolbooth t;
    unsigned int total_cars;
    double amount;
    cout<<"Enter the total number of cars: "<<endl;
    cin>>total_cars;

    cout<<"Enter the total amount of car: "<<endl;
    cin>>amount;

    int ch;

    do
    {
        cout<<"Enter the choice: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            t.payingcar(total_cars,amount);
            break;
            case 2:
            t.nonpayingcar();
            break;
            case 3:
            t.display();
            break;;
            default:
            cout<<"inavlid choice: ";
            break;
        }
    } while (ch<3);
    



}
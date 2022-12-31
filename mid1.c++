#include<iostream>
using namespace std;
class flight
{
    private:
    int fn;
    string dest;
    float distance;
    float fuel;
    public:
    void feedinfo()
    {
        cout<<"Enter the flight number: "<<endl;
        cin>>fn;
        cin.ignore();
        cout<<"Enter the destination: "<<endl;
        getline(cin,dest);
        cout<<"Enter the distance: "<<endl;
        cin>>distance;
    }
    void calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
            cout<<"Fuel is : "<<fuel<<endl;
        }
        else if(distance>1000 && distance<=2000)
        {
            fuel=1100;
            cout<<"Fuel is : "<<fuel<<endl;
        }
        else
        {
            fuel=2200;
            cout<<"Fuel is : "<<fuel<<endl;
        }
    }

    void showinfo()
    {
        cout<<"Enter the flight number: "<<fn<<endl;
        cout<<"Enter the destination: "<<dest<<endl;
        cout<<"Enter the distance: "<<distance<<endl;
        cout<<"Enter the fuel used: "<<fuel<<endl;
    }
};

int main()
{
    flight f;
    f.feedinfo();
    f.calfuel();
    f.showinfo();
}
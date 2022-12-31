#include<iostream>
using namespace std;
class radio
{
    protected:
    string brand;
    double currentchannel;
    int numberofchannels;
    public:
    radio()
    {
        brand="";
        currentchannel=0;
        numberofchannels=0;
    }
    void setbrandname()
    {
        cout<<"enter the brand name: "<<endl;
        getline(cin,brand);
    }
    void getbrandname()
    {
        cout<<"Brand name: "<<brand<<endl;
    }

    void setnumberofchannels()
    {
        cout<<"Enter the number of channnels: "<<endl;
        cin>>numberofchannels;
    }
    void getnumberofchannels()
    {
        cout<<"Number of channels: "<<numberofchannels<<endl;
    }
    void setcurrentchannel()
    {
        cout<<"Enter the current channel: "<<endl;
        cin>>currentchannel;

    }
    void getcurrentchannel()
    {
        cout<<"current channel: "<<currentchannel<<endl;
    }

    void dispalyradioinfo()
    {
        getbrandname();
        getnumberofchannels();
        getcurrentchannel();
    }
};

int main()
{
    radio r;
    r.setbrandname();
    r.setcurrentchannel();
    r.setnumberofchannels();
    r.dispalyradioinfo();
}
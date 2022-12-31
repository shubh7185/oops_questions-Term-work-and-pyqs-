#include<iostream>
using namespace std;
class batsman
{
    private:
    int bcode;
    string bname;
    int inining;
    int notout;
    int run;
    double batavg;
    int calavg()
    {
        batavg=run/(inining-notout);
        cout<<"Avg score: "<<batavg<<endl;
    }
    public:
    void readdata()
    {
        cout<<"Enter bcode: "<<endl;
        cin>>bcode;
        cin.ignore();
        cout<<"Enter bname: "<<endl;
        getline(cin,bname);
        cout<<"Enter inings: "<<endl;
        cin>>inining;
        cout<<"Enter notout: "<<endl;
        cin>>notout;
        cout<<"Enter run: "<<endl;
        cin>>run;
    }

    void showdata()
    {
        cout<<" bcode: "<<bcode<<endl;
        cout<<" bname: "<<bname<<endl;
        cout<<" inings: "<<inining<<endl;
        cout<<" notout: "<<notout<<endl;
        cout<<" run: "<<run<<endl;
        calavg();
    }

};

int main()
{
    batsman b;
    b.readdata();
    b.showdata();
}
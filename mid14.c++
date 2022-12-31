#include<iostream>
using namespace std;

class book
{
    private:
    int bn;
    string bt;
    float ppc;
    void totalcost( int n)
    {
        ppc = ppc*n;
        cout<<"total cost: "<<ppc<<endl;
    }

    public:
    void input()
    {
        cout<<"Enter the book number: "<<endl;
        cin>>bn;
        cin.ignore();
        cout<<"Enter the book title: "<<endl;
        cin>>bt;
        cout<<"Enter the price per copy: "<<endl;
        cin>>ppc;
    }

    void purchase()
    {
        int n;
        cout<<"Enter the number of copies you want: "<<endl;
        cin>>n;
        totalcost(n);

    }

};

int main()
{
    book b;
    b.input();
    b.purchase();
}
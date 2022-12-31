#include<iostream>
using namespace std;

class invoice
{
    private:
    string partnumber;
    string partdescription;
    int quantity;
    double price_per_item;
    public:

    invoice()
    {
        partnumber=" ";
        partdescription=" ";
        quantity=0;
        price_per_item=0.00;
    };

    void setpartnumber(string pn)
    {
        partnumber=pn;
    }

        void setpartdescription(string pd)
    {
        partdescription=pd;
    }
        void setquantity(int q)
    {
        if(quantity<0)
        quantity=0;
        else
        quantity=q;
    }
        void setprice_per_item(int ppt)
    {
        if(price_per_item<0)
        price_per_item=0;
        else
        price_per_item=ppt;
    }

    string getpartnumber()
    {
        return partnumber;
    }

    string getpartdescription()
    {
        return partdescription;
    }

    int getquantity()
    {
        return quantity;
    }

    void getinvoiceamount()
    {
        double invoiceamt;
        invoiceamt = quantity*price_per_item;

        cout<<"invoice amount: "<<invoiceamt<<endl;
    }

    void invoicetest()
    {
        cout<<"partnumber: "<<partnumber<<endl;;
        cout<<"partdescription: "<<partdescription<<endl;
        cout<<"quantity: "<<quantity<<endl;
        cout<<"priceperitem: "<<price_per_item<<endl;

    }
};

int main()
{
    invoice i;
    i.setpartnumber("37a56");
    i.setpartdescription("bonet");
    i.setquantity(2);
    i.setprice_per_item(20000);
    i.getinvoiceamount();
    i.invoicetest();


}
#include<iostream>
using namespace std;

class Customer
{
    int Cid,age;
    string Cnm,city;
public:
    Customer(int,string,int,string);
    void display()
    {
        cout<<"Customer ID: "<<Cid<<endl;
        cout<<"\nCustomer Name: "<<Cnm<<endl;
        cout<<"\nAge: "<<age<<endl;
        cout<<"\nCity: "<<city<<endl;
    }
};

Customer::Customer(int p,string q,int r,string s)
{
    Cid=p;
    Cnm=q;
    age=r;
    city=s;
}
int main()
{
    Customer p(120,"Rameshkumar",26,"Gondia");
    p.display();
    return 0;
}

#include<iostream>
using namespace std;
class Department
{
    int id;
    char nm[15];
    char man[15];
    int emp;
public:
    void setData();
    void display();
    int getNo()
    {
        return id;
    }
};

void Department::setData()
{
    cout<<" Enter ID: "<<endl;
    cin>>id;
    cout<<"Name: "<<endl;
    cin>>nm;
    cout<<"Manager: "<<endl;
    cin>>man;
    cout<<"No of Employees: "<<endl;
    cin>>emp;
}

void Department::display()
{
    cout<<"ID: "<<id<<"\nName: "<<nm<<"\nManager: "<<man<<"\nNo of Employees: "<<emp<<endl;
}
int main()
{
    Department a;
    a.setData();
    a.display();
    return 0;
}

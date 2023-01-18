#include<iostream>
using namespace std;

int main()
{
    int x,y,i,hcf;
    cout<<"\nEnter two numbers:";
    cin>>x>>y;
    for(i=1;i<=x &&i<=y;i++)
    {
        if(x%i==0 && y%i==0)
            hcf=i;
    }
    cout<<"The HCF of "<<x<<" and "<<y<<" = "<<hcf;
    return 0;
}

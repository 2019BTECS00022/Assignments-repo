#include<iostream>
using namespace std;

int main()
{
    int i=2,x,dig;
    cout<<"Enter no: ";
    cin>>x;
    do
    {
        if(x%i==0)
            break;
    }
    while(++i<x);
    if(i!=x)
    {
        cout<<"Not prime"<<endl;
        return 0;
    }
    while(x>0)
    {
        dig=x%10;
        if(dig==2||dig==3||dig==5||dig==7)
            x/=10;
        else
            break;
    }
    if(x>0)
        cout<<"Prime"<<endl;
    else
        cout<<"Super prime"<<endl;
    return 0;
}

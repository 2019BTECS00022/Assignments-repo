#include<iostream>
using namespace std;

int main()
{
    int x,y,lcm;
    cout<<"\nEnter two numbers:";
    cin>>x>>y;
    if(x>y)
        lcm=x;
    else
        lcm=y;
    while(1)
    {
        if(lcm%x==0 && lcm%y==0)
        {
            cout<<"the LCM of "<<x<<" and "<<y<<" = "<<lcm;
            break;
        }
        lcm++;
    }
    return 0;
}

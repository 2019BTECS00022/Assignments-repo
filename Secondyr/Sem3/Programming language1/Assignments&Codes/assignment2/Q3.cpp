#include<iostream>
using namespace std;
#include<math.h>
#include<cstdlib>

class Totarea
{
    float A;
public:
    Totarea(float radius)
    {
        A=3.14*radius*radius;
    }
    Totarea(float p,float q,float r)
    {
        float s;
        s=(p+q+r)/2;
        A=s*(s-p)*(s-q)*(s-r);
        A=pow(A,0.5);
    }
    Totarea(float x,float y)
    {
        A=x*y;
    }
    void display()
    {
        cout<<"Total Area: "<<A;
    }
};

int main()
{
    float a,b,c;
    int opt;
    while(opt!=4)
    {
        cout<<"\nArea of given structures\n 1.Area of Circle :\n 2.Area of Triangle :\n 3.Area of Square :\n 4.Exit \nOption :\n";
        cin>>opt;
        if(opt>3)
            break;
        switch(opt)
        {
        case 1:
            {
                cout<<"\nEnter radius: ";
                cin>>a;
                Totarea A1(a);
                A1.display();
            }
            break;
        case 2:
            {
                cout<<"Sides of Triangle: ";
                cin>>a>>b>>c;
                Totarea A2(a,b,c);
                A2.display();
            }
            break;
        case 3:
            {
                cout<<"\nSides of Square: ";
                cin>>a>>b;
                Totarea A3(a,b);
                A3.display();
            }
            break;
        case 4:
            cout<<"Exit";
        default:
            cout<<"Invalid Area";
        }
    }
    return 0;
}

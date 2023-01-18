#include<iostream>
using namespace std;

class Box
{
    int l,b,A;
    static int h;
    static int cnt;
public:
    static int getHeight()
    {
        cout<<"\nEnter height ";
        cin>>h;
    }
    Box(int ,int);
    void Area();
};
Box::Box(int x,int y)
{
    cout<<"\nEnter the value of Length: ";
    cin>>x;
    cout<<"\nEnter the value of Breath: ";
    cin>>y;
    l=x;b=y;
}
void Box::Area()
{
    A=((2*l*b)+(2*b*h)+(2*h*l));
    cout<<"\nArea of "<<cnt+1<<" st box is "<<A;
    cnt++;
}
int Box::h;
int Box::cnt;
int main()
{
    Box p=Box(2,3);
    Box::getHeight();
    p.Area();
    Box q=Box(2,3);
    Box::getHeight();
    q.Area();
    return 0;
}

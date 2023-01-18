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
    Box(int);
    Box();
    void display();
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
Box::Box(int x)
{
    l=x;b=0;
}
Box::Box()
{
    l=0;b=0;
}
void Box::display()
{
    cout<<"\nLength: "<<l<<"\nBreath: "<<b;
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
    p.display();
    p.Area();
    Box q=Box(2,3);
    Box::getHeight();
    q.display();
    q.Area();
    Box r=Box();
    Box::getHeight();
    r.display();
    r.Area();
    return 0;
}

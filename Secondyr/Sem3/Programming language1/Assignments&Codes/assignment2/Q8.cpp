#include<iostream>
using namespace std;
#include<cmath>

double Power(double m,int n)
{
    double a=pow(m,n);
    return a;
}
long long Power(int m,int n=2)
{
    int b=pow(m,n);
    return b;
}

int main()
{
    int b,n;
    double a,m;
    cout<<"\nCalculate square: ";
    cin>>m;
    a=Power(m);
    cout<<"\nResult(m^n)"<<a<<endl;
    cout<<"\nValue of double m: ";
    cin>>m;
    cout<<"\nValue of n: ";
    cin>>n;
    a=Power(m,n);
    cout<<"\nResult(m^n)"<<a<<endl;
    cout<<"\nValue of int m: ";
    cin>>b;
    long long h=Power(b);
    cout<<"\nResult(m^n)"<<h<<endl;
    cout<<"\nValue of int m: ";
    cin>>b;
    cout<<"\nValue of n: ";
    cin>>n;
    long long g=Power(b,n);
    cout<<"\nResult(m^n)"<<g<<endl;
    return 0;
}

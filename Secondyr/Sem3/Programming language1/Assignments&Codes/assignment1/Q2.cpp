#include<iostream>
using namespace std;

class number
{
public:
    int a,b,c;
    void input()
    {
        cout<<"Enter Nos: ";
        cin>> a>>b>>c;
    }
    void sort()
    {
        if(a<b &&a<c &&b<c)
            cout<<"Ascending Nos: "<< a<< b<< c;
        else
            if(b<a &&b<c &&a<c)
            cout<<"ascending Nos: "<< b<< a<< c;
        else
            if(c<a &&c<b &&b<a)
            cout<<"Ascending Nos: "<< c<< b<< a;
        else
            cout<<"Ascending Nos: "<< c<< a<< b;
    }
};



int main()
{
    number a;
    a.input();
    a.sort();
    return 0;
}

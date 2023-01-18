#include<iostream>
using namespace std;
#define M 5

class Result
{
    int mrk[M];
public:
    void getResult();
    void getResult(int);
    void insert();
    void display();
    int caltot();
    int calavg()
    {
        return caltot()/M;
    }
};
void Result::getResult()
{
    for(int i=0;i<M;i++)
        mrk[i]=0;
}
void Result::getResult(int val)
{
    for(int i=0;i<M;i++)
        mrk[i]=val;
}
void Result::insert()
{
    cout<<"\nData:\n ";
    for(int i=0;i<M;i++)
        cin>>mrk[i];
}
void Result::display()
{
    int i=0;
    cout<<"\nData:\n ";
    while(i<M)
        cout<<" "<<mrk[i++];
}
int Result::caltot()
{
    int tot=mrk[0],i=1;
    while(i<M)
    {
        tot+=mrk[i++];
    }
    return tot;
}

int main()
{
    Result r;
    r.insert();
    r.display();
    int tot=r.caltot();
    int avg=tot/M;
    cout<<"\nTotal Marks: "<<tot;
    cout<<"\nAverage marks: "<<avg;
    return 0;
}

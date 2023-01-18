#include<iostream>
using namespace std;

int main()
{
    int a[5]={23,45,54,67,89};
    int Sum=0,Min=a[0],Max=a[0];
    float Avg;
    for(int i=0;i<5;i++)
    {
        Sum+=a[i];
    }
    cout<<"Sum of all elements: "<<Sum<<endl;
    cout<<"Average of all elements: "<<Sum/5<<endl;
    for(int i=1;i<5;i++)
    {
        if(Max<a[i])
            Max=a[i];
        if(Min>a[i])
            Min=a[i];
    }
    cout<<"Largest element: "<<Max<<endl;
    cout<<"Smallest element: "<<Min<<endl;
    return 0;
}

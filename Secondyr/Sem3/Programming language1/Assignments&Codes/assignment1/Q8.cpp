#include<iostream>
using namespace std;

int main()
{
    string str="Health is wealth.";
    char freqchar='a';
    int i,cnt=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]==freqchar)
        {
            cnt++;
        }
    }
    cout<<"\nFrequency no. of "<<freqchar<<" ="<<cnt;
    return 0;
}

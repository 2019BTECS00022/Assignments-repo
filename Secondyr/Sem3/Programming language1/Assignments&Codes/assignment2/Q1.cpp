#include<iostream>
using namespace std;

class Film
{
    int duration;
    string nm,language,type;
public:
    Film();
    void input();
    void display();
};
void Film::input()
{
    cout<<"Name: ";
    cin>>nm;
    cout<<"\nLanguage: ";
    cin>>language;
    cout<<"\nType: ";
    cin>>type;
    cout<<"\nDuration: ";
    cin>>duration;
}
void Film::display()
{
    cout<<"Film Name: "<<nm;
    cout<<"\nLanguage of Film: "<<language;
    cout<<"\nType of Film: "<<type;
    cout<<"\nTime Duration : "<<duration;
}
Film::Film()
{
    language="Hindi";
    cout<<"\nLanguage is "<<language;
    duration=3;
    cout<<"\nTime Duration is "<<duration<<" Hrs"<<endl;
}
int main()
{
    Film d;
    d.input();
    d.display();
}

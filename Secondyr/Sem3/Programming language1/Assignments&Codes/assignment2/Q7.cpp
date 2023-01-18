#include<iostream>
using namespace std;

class Film
{
    int dur;
    string name,lng,typ;
public:
    void input();
    void display();
    Film();
    ~Film(){cout<<"Destructor";}
};
void Film::input()
{
    cout<<"Name: ";
    cin>>name;
    cout<<"\nLanguage: ";
    cin>>lng;
    cout<<"\nType: ";
    cin>>typ;
    cout<<"\nDuration: ";
    cin>>dur;
}
void Film::display()
{
    cout<<"Film Name: "<<name;
    cout<<"\nLanguage: "<<lng;
    cout<<"\nType of Film: "<<typ;
    cout<<"\nDuration : "<<dur;
}
Film::Film()
{
    lng="Hindi";
    cout<<"\nLanguage is "<<lng<<endl;
    dur=3;
    cout<<"\nDuration is "<<dur<<" (Hrs)"<<endl;
}
int main()
{
    Film b;
    b.input();
    b.display();
}

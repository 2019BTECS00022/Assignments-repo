#include<iostream>
using namespace std;

class SportsTeam
{
    int no_of_players,avg_age;
    string name;
    static int objcount;
public:
    void insert();
    void display();
    static void getcount()
    {
        cout<<"\nValue of Object count is "<<objcount<<endl;
    }
};
int SportsTeam::objcount;

void SportsTeam::insert()
{
    cout<<"\nEnter name of "<<objcount+1<<" sport Team: ";
    cin>>name;
    cout<<"\nEnter No of Player of "<<objcount+1<<" sport Team: ";
    cin>>no_of_players;
    cout<<"\nEnter the Average age of "<<objcount+1<<" sport Team: ";
    cin>>avg_age;
}
void SportsTeam::display()
{
     cout<<"\nEnter name of sport team is "<<name<<" of sport no"<<objcount+1<<"st";
    cout<<"\nEnter No of Player in sport team is "<<no_of_players<<" of sport no"<<objcount+1<<"st";
    cout<<"\nEnter the Average age of players in sport team is "<<avg_age<<" of sport no"<<objcount+1<<"st";
    objcount++;
}
int main()
{
    SportsTeam t1,t2,t3;
    t1.insert();
    t1.display();
    SportsTeam::getcount();
    t2.insert();
    t2.display();
    SportsTeam::getcount();
    t3.insert();
    t3.display();
    SportsTeam::getcount();
    return 0;
}

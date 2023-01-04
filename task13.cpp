#include<iostream>
using namespace std;
void tom (int);
main(){
int holidays;
cout<<"Enter the number of Holidays=";
cin>> holidays;
tom(holidays);
}
void tom(int holidays)
{

int working_days = 365 - holidays;
int time_for_games = (holidays * 127) + (working_days*63);
int time_left = 30000 - time_for_games;
if (time_left > 1000)
{
    cout<<"Tom Sleeps Well\n"<<time_left<<" Minutes Less for Games";
}
if (time_left < 0)
    
{
    int time_left1 = time_left*(-1);//to convert into positive 
    int hours = time_left1/60;//to convert into hours
    int minutes = time_left1%60;//to select minutes 
    cout<<"Tom will run Away \n"<<hours<<" hours and "  <<minutes<<" minutes of extra playing ";
}
}


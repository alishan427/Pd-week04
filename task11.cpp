#include<iostream>
using namespace std;
void speed_check (int);
main (){
int speed;
cout<<"Speed=";
cin>>speed;
speed_check (speed);
}
void speed_check (int speed){

if (speed > +  100 )
{
cout<<"Halt.. \n You will be challanged";

}
if (speed <=  100 )
{
cout<<"Perfectly you are going good :)";

}




}
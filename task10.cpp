#include<iostream>
using namespace std;
void ticket_price(float,string);
 main()
{
float dollars;
string country;
while (true){
cout<<"Enter the ticket Price $$$ = ";
cin>>dollars;
cout<<"Enter country name  = ";
cin>>country;
ticket_price(dollars, country);
}
}
void ticket_price (float dollars, string country)
{
 if( country == "pakistan"  )
{
float final_amount = dollars - (dollars*0.05);
cout<<"Ticket Price="<<final_amount;
cout<<"\n";
}
 if( country == "ireland"  )
{
float final_amount = dollars - (dollars*0.10);
cout<<"Ticket Price="<<final_amount;
cout<<"\n";
}

 if( country == "india"  )
{
float final_amount = dollars - (dollars*0.20);
cout<<"Ticket Price="<<final_amount;
cout<<"\n";
}
 if( country == "england"  )
{
float final_amount = dollars - (dollars*0.30);
cout<<"Ticket Price="<<final_amount;
cout<<"\n";
}

 if( country == "canada"  )
{
float final_amount = dollars - (dollars*0.45);
cout<<"Ticket Price="<<final_amount;
cout<<"\n";
}
}





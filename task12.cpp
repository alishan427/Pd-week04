#include<iostream>
using namespace std;
void flower_shop(float,float,float);
main()
{
float red,white,tulip;
cout<<"Enter The Number of Red Roses= ";
cin>>red;
cout<<"Enter The Number of white Roses= ";
cin>>white;
cout<<"Enter The Number of Tulips= ";
cin>>tulip;
flower_shop(red,white,tulip);
}
void flower_shop(float red,float white ,float tulip)
{
float red_p = 2.00;
float white_p = 4.10;
float tulip_p = 2.50;
float price = (red * red_p) + (white*white_p) + (tulip * tulip_p);
if (price > 200 )
{
float final_price = price - (price - 0.20);
cout<<"Bill ="<<final_price;
}
else 
{
    cout<<"Bill ="<<price;
}



}
#include<iostream>
using namespace std;
void equal_check(int,int);
main(){
int num1,num2;
cout<<"Enter number 1 =";
cin>>num1;
cout<<"Enter number 2 =";
cin>>num2;
equal_check(num1,num2);

}
void equal_check(int num1,int num2)

{
 if (num1 == num2 )
{
 cout<<"True";

}
if (num1 != num2 )
{
 cout<<"False";

}

}









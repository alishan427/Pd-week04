#include <iostream>
#include <windows.h>
using namespace std;
void print_maze();
void gotoxy (int x , int y);
void player_move(int x  , int y);
main ()
{
  int x=3;
  int y=3;
  system ("cls");
  print_maze();
  gotoxy (x, y);
  while(true)
{
player_move(x, y);
if (x < 20)
{ x = x+1 ;
}
if (x == 20)
{ gotoxy (x-1 ,y);
  cout << " ";
  x = 3;
}
}
}

void print_maze()
{
  cout << "######################################" << endl ;
  cout << "#                                    # "  << endl;
  cout << "#                                    # "  << endl;
  cout << "#                                    # "  << endl;
  cout << "#                                    # "  << endl;
  cout << "#                                    # "  << endl;
  cout << "#                                    # "  << endl;
  cout << "#                                    # "  << endl;
  cout << "#                                    # "  << endl;
  cout << "#                                    # " << endl ;
  cout << "#                                    # "  << endl;
  cout << "#                                    # "  << endl;
  cout << "#                                    # "  << endl;
  cout << "######################################"  << endl;
}
void gotoxy (int x, int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void player_move(int x , int y)
{ 
 gotoxy (x-1, y);
 cout << " ";
 gotoxy (x, y);
 cout << "P";
 Sleep (300);
}
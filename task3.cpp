#include <iostream>
#include <windows.h>
using namespace std;
void print_maze();
void gotoxy (int x , int y);
void player_move(int x , int y);
main ()
{
system ("cls");
print_maze();
gotoxy (6, 6);
player_move(5, 5);

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
 gotoxy (x-2, y);
 cout << " ";
 gotoxy (x, y);
 cout << "P";
 Sleep (100);
}
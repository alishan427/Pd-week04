#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy (int x , int y);
void print_maze();
main ()
{
system ("cls");
gotoxy (0, 0);
print_maze();

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



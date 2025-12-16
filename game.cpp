#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main()
{
    char grid[9][9];
    int x = 0, y = 0;
    char ch;

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            grid[i][j] = '-';

    while (true)
    {
    	if (ch == 'w' || ch == 'W'){
    		cout<<"W - Up";
		}
		if (ch == 'a' || ch == 'A'){
    		cout<<"A - Left";
		}
		if (ch == 's' || ch == 'S'){
    		cout<<"S - Down";
		}
		if (ch == 'd' || ch == 'D'){
    		cout<<"D - Right";
		}
        system("cls");   // clear screen

        grid[x][y] = '1';

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
                cout << grid[i][j] << " ";
            cout << endl;
        }

        grid[x][y] = '-';

        ch = getch();
        if (ch == 'q' || ch == 'Q')
            break;

        if ((ch == 'w' || ch == 'W') && x > 0) x--;
        else if ((ch == 's' || ch == 'S') && x < 8) x++;
        else if ((ch == 'a' || ch == 'A') && y > 0) y--;
        else if ((ch == 'd' || ch == 'D') && y < 8) y++;
    }

    return 0;
}
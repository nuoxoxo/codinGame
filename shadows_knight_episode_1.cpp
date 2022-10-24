#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
	int w; // width of the building.
	int h; // height of the building.
	cin >> w >> h; cin.ignore();
	int n; // maximum number of turns before game over.
	cin >> n; cin.ignore();
	// int x0;
	// int y0;
	// cin >> x0 >> y0; cin.ignore();

	int	x, y;
	cin >> x >> y;
	cin.ignore();

	string	dir;
	int	R, L, D, U;

	L = U = 0;
	R = w - 1;
	D = h - 1;


	// game loop
	while (1)
	{
		// string bomb_dir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
		// cin >> bomb_dir; cin.ignore();

	// Write an action using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;

		cin >> dir;
		if (dir.find('L') != string::npos)
			R = x - 1;
		else if (dir.find('R') != string::npos)
			L = x + 1;
		if (dir.find('D') != string::npos) 
			U = y + 1;
		else if (dir.find('U') != string::npos)
			D = y - 1;
		x = (R - L) / 2 + L;
		y = (D - U) / 2 + U;
		cout << x << ' ' << y << '\n';
		

	// the location of the next window Batman should jump to.
	// cout << "0 0" << endl;
	}
}

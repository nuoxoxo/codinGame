#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <limits.h> // added

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
	int mx = INT_MAX;
    int flag = false;
	int n; // the number of temperatures to analyse
	cin >> n; cin.ignore();
    if (!n)
        mx = 0;
	for (int i = 0; i < n; i++)
	{
        int t; // a temperature expressed as an integer 
		       // ranging from -273 to 5526
		cin >> t; cin.ignore();
        // cout << t << ' ';
		if (abs(t) <= abs(mx))
		{
            if (abs(t) == abs(mx) && t < 0 && mx > 0)
                flag = true;
            mx = t;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    // cout << "result" << endl;
    if (flag)
        cout << abs(mx) << '\n';
    else
        cout << mx << '\n';
}


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Don't let the machines win. You are humanity's last hope...
 **/

void	checker(vector<string>& v, int h, int w, int H, int W);

int main()
{
    int width; // the number of cells on the X axis
    cin >> width; cin.ignore();
    int height; // the number of cells on the Y axis
    cin >> height; cin.ignore();
    
    vector<string>	G;

    for (int i = 0; i < height; i++) {
        string line;
        getline(cin, line); // width characters, each either 0 or .
	G.push_back(line);
    }
    int i, j;
    i = -1;
    while (++i < height)
    {
	    j = -1;
	    while (++j < width)
	    {
		    if (G[i][j] == '0')
			    checker(G, i, j, height, width);
	    }
    }


    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


    // Three coordinates: a node, its right neighbor, its bottom neighbor
    //cout << "0 0 1 0 0 1" << endl;
}

void	checker(vector<string>& v, int h, int w, int H, int W)
{
	vector<int>	res	{w, h, -1, -1, -1, -1};
	int		i;

	i = w;
	while (++i < W)
	{
		if (v[h][i] == '0')
		{
			res[2] = i;
			res[3] = h;
			break ;
		}
	}
	i = h;
	while (++i < H)
	{
		if (v[i][w] == '0')
		{
			res[4] = w;
			res[5] = i;
			break ;
		}
	}
	i = -1;
	while (++i < 6)
	{
		cout << res[i];
		if (i != 5)
			cout << ' ';
	}
	cout << '\n';
}

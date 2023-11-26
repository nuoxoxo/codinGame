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
	int n; // Number of elements which make up the association table.
	cin >> n; cin.ignore();
	int q; // Number Q of file names to be analyzed.
	cin >> q; cin.ignore();

	///	using map

	unordered_map<string, string>	mp;

	for (int i = 0; i < n; i++)
	{
		string ext; // file extension
		string mt; // MIME type.
		cin >> ext >> mt; cin.ignore();

		for (char & c: ext)
			c = c <= 'Z' && c >= 'A' ? c + ' ' : c;
		mp[ext] = mt;
	}

	for (int i = 0; i < q; i++)
	{
		string fname;
		getline(cin, fname); // One file name per line.

		unordered_map<string, string>::iterator	it;

		string	res = "UNKNOWN";
		int	j = (int) fname.length();

		for (char & c: fname)
			c = c <= 'Z' && c >= 'A' ? c + ' ' : c;
		while (--j > -1)
		{
			if (fname[j] != '.')
				continue ;
			break ;
		}
		if (j ^ -1)
		{
			fname = fname.substr(j + 1);
			it = mp.find(fname);
			if (it != mp.end())
				res = it->second;
		}
		cout << res << endl;
	}

	// Write an answer using cout. DON'T FORGET THE "<< endl"
	// To debug: cerr << "Debug messages..." << endl;

	// For each of the Q filenames, display on a line the corresponding MIME type. 
	// If there is no corresponding type, then display UNKNOWN.
	/// cout << "UNKNOWN" << endl;
}

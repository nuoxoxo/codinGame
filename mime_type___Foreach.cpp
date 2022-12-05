#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include "map"

using namespace std;

int	main()
{
	int n; // Number of elements which make up the association table.
	cin >> n; cin.ignore();
	int q; // Number Q of file names to be analyzed.
	cin >> q; cin.ignore();

	/// using map
	unordered_map<string, string>           mp;
	unordered_map<string, string>::iterator it;
	string	na = "UNKNOWN";
	int	i;

	i = -1;
	while (++i < n)
	{
		string ext; // file extension
		string mt; // MIME type.
		cin >> ext >> mt; cin.ignore();
	
		// setting up map
		for_each(ext.begin(), ext.end(), [](char & c){c = tolower(c);});
		mp[ext] = mt;
	}

	i = -1;
	while (++i < q)
	{
		string	fname; // One file name per line.
		
		string	output = na;
		int	last;

		getline(cin, fname);
		for_each(fname.begin(), fname.end(), [](char & c){c = tolower(c);});
		last = fname.find_last_of(".");
		if (last ^ -1)
		{
			fname = fname.substr(last + 1);
			it = mp.find(fname);
			if (it == mp.end())
				continue ;
			output = it->second;
		}
		cout << output << endl;
	}
}

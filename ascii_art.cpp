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
    int l;
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t;
    getline(cin, t);

    vector<string>  arr;

    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);
        arr.push_back(row);
        // cout << row << endl;
    }

    //  Main solve

    int pos, i, offset;

    i = -1;
    while (++i < h)
    {
        for (char c: t)
        {
            pos = 26; // send all non-alpha char to '?'
            if (c <= 'z' && c >= 'a')
                pos = c - 'a';
            else if (c <= 'Z' && c >= 'A')
                pos = c - 'A';
            offset = -1;
            while (++offset < l)
                cout << arr[i][l * pos + offset];
        }
        cout << '\n';
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    // cout << "answer" << endl;
}

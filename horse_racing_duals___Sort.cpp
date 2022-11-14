#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, j, d, diff = (int) 1e7;
    vector<int> arr;

    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int pi;
        // cout << pi << '\n';  // dbg
        cin >> pi; cin.ignore();
        arr.push_back(pi);
    }
    if (n == 1)
        cout << arr[0] << endl;
    else
    {
        sort(arr.begin(), arr.end());
        i = -1;
        while (++i < n - 1)
        {
            d = abs(arr[i + 1] - arr[i]);
            diff = diff > d ? d : diff;
        }
        cout << diff << endl;
    }
}

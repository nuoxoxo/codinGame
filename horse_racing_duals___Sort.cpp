#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, N, i, j, d, diff = (int) 1e7;
    vector<int> arr;

    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) {
        int pi;
        // cout << pi << '\n';  // dbg
        cin >> pi; cin.ignore();
        arr.push_back(pi);
    }
    if (N == 1)
        cout << arr[0] << endl;
    else
    {
        sort(arr.begin(), arr.end());
        i = -1;
        while (++i < N - 1)
        {
            d = abs(arr[i + 1] - arr[i]);
            diff = diff > d ? d : diff;
        }
        cout << diff << endl;
    }
}

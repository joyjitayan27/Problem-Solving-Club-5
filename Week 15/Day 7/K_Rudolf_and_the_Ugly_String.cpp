#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int r = 0;
        for (size_t i = 0; i + 2 < s.size(); i++)
        {
            if (s.substr(i, 3) == "pie" || s.substr(i, 3) == "map")
            {
                r++;
                s[i + 1] = '#';
                i += 2;
            }
        }

        cout << r << "\n";
    }

    return 0;
}
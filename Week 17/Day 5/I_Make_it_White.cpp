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
        cin >> n;
        string s;
        cin >> s;
        int f = -1, l = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                if (f == -1)
                    f = i;
                l = i;
            }
        }
        cout << (l - f + 1) << "\n";
    }

    return 0;
}
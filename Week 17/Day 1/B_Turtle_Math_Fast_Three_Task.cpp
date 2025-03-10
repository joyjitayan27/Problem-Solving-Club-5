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
        vector<int> a(n);
        int s = 0, c1 = 0, c2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
            if (a[i] % 3 == 1)
                c1++;
            if (a[i] % 3 == 2)
                c2++;
        }

        if (s % 3 == 0)
        {
            cout << 0 << "\n";
        }
        else if (s % 3 == 1)
        {
            if (c1 > 0)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 2 << "\n";
            }
        }
        else
        {
            if (c2 > 0)
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 1 << "\n";
            }
        }
    }

    return 0;
}
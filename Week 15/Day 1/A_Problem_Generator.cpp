#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        string a;
        cin >> a;

        vector<ll> d(7, 0);

        for (char c : a)
        {
            d[c - 'A']++;
        }

        ll p = 0;

        for (ll i = 0; i < 7; i++)
        {
            if (d[i] < m)
            {
                p += m - d[i];
            }
        }

        cout << p << endl;
    }

    return 0;
}
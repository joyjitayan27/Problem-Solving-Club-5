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
        ll n, s, m;
        cin >> n >> s >> m;

        vector<pair<ll, ll>> ller(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> ller[i].first >> ller[i].second;
        }

        bool cans = false;
        ll prevEnd = 0;

        for (ll i = 0; i < n; ++i)
        {
            if (ller[i].first - prevEnd >= s)
            {
                cans = true;
                break;
            }
            prevEnd = ller[i].second;
        }

        if (!cans && m - prevEnd >= s)
        {
            cans = true;
        }

        cout << (cans ? "YES\n" : "NO\n");
    }

    return 0;
}
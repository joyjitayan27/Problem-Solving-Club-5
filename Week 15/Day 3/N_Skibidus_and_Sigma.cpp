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

        vector<vector<ll>> a(n, vector<ll>(m));
        vector<ll> s(n, 0);

        for (ll i = 0; i < n; ++i)
        {
            for (ll j = 0; j < m; ++j)
            {
                cin >> a[i][j];
                s[i] += a[i][j];
            }
        }

        vector<ll> p(n);
        for (ll i = 0; i < n; ++i)
            p[i] = i;
        sort(p.begin(), p.end(), [&](ll x, ll y)
             { return s[x] > s[y]; });

        vector<ll> c;
        for (ll x : p)
        {
            c.insert(c.end(), a[x].begin(), a[x].end());
        }

        ll r = 0, ps = 0;
        for (ll x : c)
        {
            ps += x;
            r += ps;
        }

        cout << r << "\n";
    }

    return 0;
}
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
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll, ll> b;

        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
            b[a[i]]++;
        }

        ll c = 0;

        for (auto &d : b)
        {
            ll e = d.first;
            ll f = d.second;

            for (ll g = 3; g <= f; ++g)
            {
                if (f >= g)
                {
                    c += f / g;
                    f %= g;
                }
            }
        }

        cout << c << endl;
    }

    return 0;
}
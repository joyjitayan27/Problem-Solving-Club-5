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
        ll n, m, k;
        cin >> n >> m >> k;

        vector<ll> b(n);
        vector<ll> c(m);

        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (ll i = 0; i < m; i++)
        {
            cin >> c[i];
        }

        ll count = 0;

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (b[i] + c[j] <= k)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
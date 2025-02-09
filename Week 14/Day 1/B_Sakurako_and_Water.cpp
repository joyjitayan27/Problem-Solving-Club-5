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

        vector<vector<ll>> a(n, vector<ll>(n));

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        ll o = 0;

        for (ll i = n - 1; i >= 0; i--)
        {
            for (ll j = n - 1; j >= 0; j--)
            {
                if (a[i][j] < 0)
                {
                    ll d = -a[i][j];
                    o += d;

                    for (ll k = 0; k <= d - 1; k++)
                    {
                        if (i - k >= 0 && j - k >= 0)
                        {
                            a[i - k][j - k] += d;
                        }
                    }
                }
            }
        }

        cout << o << endl;
    }

    return 0;
}
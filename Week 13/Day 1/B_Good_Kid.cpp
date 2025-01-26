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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long m = 0;
        for (ll i = 0; i < n; i++)
        {
            vector<ll> b = a;
            b[i]++;
            long long p = 1;
            for (ll j = 0; j < n; j++)
            {
                p *= b[j];
            }
            m = max(m, p);
        }

        cout << m << "\n";
    }

    return 0;
}
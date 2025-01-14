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
        ll n, k, d;
        cin >> n >> k >> d;
        vector<ll> a(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll m = k + 1;

        for (ll i = 0; i <= n - d; i++)
        {
            set<ll> s;
            for (ll j = i; j < i + d; j++)
            {
                s.insert(a[j]);
            }
            m = min(m, (ll)s.size());
        }

        cout << m << endl;
    }

    return 0;
}
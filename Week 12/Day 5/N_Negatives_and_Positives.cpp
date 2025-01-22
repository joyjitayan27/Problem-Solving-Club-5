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
        ll s = 0, c = 0, m = LLONG_MAX;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s += abs(a[i]);
            if (a[i] < 0)
            {
                c++;
            }
            m = min(m, abs(a[i]));
        }

        if (c % 2 == 1)
        {
            s -= 2 * m;
        }

        cout << s << endl;
    }

    return 0;
}
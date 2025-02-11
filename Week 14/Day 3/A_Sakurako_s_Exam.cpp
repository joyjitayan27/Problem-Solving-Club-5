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
        ll a, b;
        cin >> a >> b;

        ll s = a + 2 * b;

        if (s % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        ll m = s / 2;

        ll x = min(m / 2, b);

        m -= x * 2;

        if (m <= a)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
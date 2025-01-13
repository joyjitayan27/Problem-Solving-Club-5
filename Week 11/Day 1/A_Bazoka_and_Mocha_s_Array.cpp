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
        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        ll c = 0;
        for (ll i = 0; i < n; ++i)
        {
            if (a[i] > a[(i + 1) % n])
            {
                c++;
            }
        }

        if (c <= 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
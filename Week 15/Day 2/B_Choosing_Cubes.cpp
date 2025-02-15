#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void solve()
{
    ll n, f, k;
    cin >> n >> f >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll v = a[f - 1];
    sort(a.rbegin(), a.rend());

    ll l = -1, u = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == v)
        {
            if (l == -1)
                l = i;
            u = i;
        }
    }

    if (u < k)
    {
        cout << "YES\n";
    }
    else if (l >= k)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "MAYBE\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<ll> b;
    ll c = 1;
    for (ll i = 1; i < n; ++i)
    {
        if (a[i] == a[i - 1])
        {
            ++c;
        }
        else
        {
            b.push_back(c);
            c = 1;
        }
    }
    b.push_back(c);

    ll d = 0;
    for (size_t i = 1; i < b.size(); ++i)
    {
        d = max(d, 2 * min(b[i - 1], b[i]));
    }

    cout << d << endl;

    return 0;
}
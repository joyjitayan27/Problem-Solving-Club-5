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
    vector<ll> o, e;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            e.push_back(x);
        else
            o.push_back(x);
    }
    sort(o.rbegin(), o.rend());
    sort(e.rbegin(), e.rend());
    ll os = o.size();
    ll es = e.size();
    ll ms = min(os, es);
    os -= ms;
    es -= ms;
    ll rs = 0;
    if (os > 0)
    {
        for (ll i = ms + 1; i < o.size(); i++)
            rs += o[i];
    }
    else if (es > 0)
    {
        for (ll i = ms + 1; i < e.size(); i++)
            rs += e[i];
    }
    cout << rs << endl;

    return 0;
}
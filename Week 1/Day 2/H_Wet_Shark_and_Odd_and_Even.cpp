#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll sum = 0;
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
        if (v[i] % 2 != 0)
        {
            mn = min(mn, v[i]);
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << '\n';
    }
    else
    {

        ll new_sum = sum - mn;
        if (new_sum % 2 == 0)
        {
            cout << new_sum << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }
    return 0;
}
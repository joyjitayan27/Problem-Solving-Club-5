#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll x;
        cin >> x;
        vector<ll> v(x);
        for (ll i = 0; i < x; i++)
        {
            cin >> v[i];
        }

        ll cnt = 0;
        ll start = 0;
        unordered_map<ll, ll> mp;

        for (ll end = 0; end < x; end++)
        {
            mp[v[end]]++;

            while(mp[v[end]] > 1)
            {
                mp[v[start]]--;
                start++;
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}

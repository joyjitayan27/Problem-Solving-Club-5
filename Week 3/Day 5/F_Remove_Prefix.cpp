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
        vector<ll> v;

        for (int i = 0; i < x; i++)
        {
            ll temp;
            cin >> temp;
            v.push_back(temp);
        }

        ll cnt = 0;
        ll start = 0;
        while (true)
        {
            unordered_map<ll, ll> mp;
            bool flag = true;

            for (ll i = start; i < v.size(); i++)
            {
                mp[v[i]]++;
                if (mp[v[i]] > 1)
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                break;
            }
            else
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

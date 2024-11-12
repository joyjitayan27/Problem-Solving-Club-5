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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<ll> ans;
        ans.push_back(v[n - 1] - v[0]);
        ans.push_back(v[n - 1] - v[2]);
        ans.push_back(v[n - 3] - v[0]);
        ans.push_back(v[n - 2] - v[1]);
        sort(ans.begin(), ans.end());
        cout << ans[0] << endl;
        v.clear();
        ans.clear();
    }
    return 0;
}
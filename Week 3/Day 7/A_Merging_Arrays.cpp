#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    queue<ll> q;
    ll l = 0, r = 0;

    while (l < n || r < m)
    {
        if (l < n && (a[l] <= b[r]))
        {
            q.push(a[l]);
            l++;
        }
        else
        {
            q.push(b[r]);
            r++;
        }
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}

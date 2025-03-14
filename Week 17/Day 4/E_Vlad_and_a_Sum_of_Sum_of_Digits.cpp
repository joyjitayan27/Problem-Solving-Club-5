#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

const int m = 200000;
ll p[m + 1];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    p[0] = 0;
    for (ll i = 1; i <= m; i++)
    {
        ll s = 0, x = i;
        while (x > 0)
        {
            s += x % 10;
            x /= 10;
        }
        p[i] = p[i - 1] + s;
    }

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        cout << p[n] << "\n";
    }

    return 0;
}

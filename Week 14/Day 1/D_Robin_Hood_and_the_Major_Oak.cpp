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
        ll n, k;
        cin >> n >> k;

        ll s = n - k + 1;
        ll e = n;

        ll r = (e * (e + 1)) / 2 - (s * (s - 1)) / 2;

        if (r % 2 == 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
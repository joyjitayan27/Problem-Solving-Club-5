#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll min_score = abs(a[0] - a[1]);
        for (ll i = 1; i < n - 1; i++)
        {
            min_score = min(min_score, abs(a[i] - a[i + 1]));
        }

        cout << min_score << endl;
    }
    return 0;
}

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
        ll n, a, b;
        cin >> n >> a >> b;
        ll c = 0;
        ll p = n / 2;
        ll r = n % 2;
        c = p * b + r * a;
        ll d = n * a;
        cout << min(c, d) << endl;
    }

    return 0;
}
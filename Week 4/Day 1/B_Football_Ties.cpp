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
        ll x, y;
        cin >> x >> y;
        ll ans = x % 3;
        cout << ans << endl;
    }

    return 0;
}
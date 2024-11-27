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
        ll a, b;
        cin >> a >> b;
        ll x = a & b;
        ll result = (a ^ x) + (b ^ x);
        cout << result << "\n";
    }
    return 0;
}
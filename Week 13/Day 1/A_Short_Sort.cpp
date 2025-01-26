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
        string s;
        cin >> s;
        string t = "abc";
        ll c = 0;
        for (ll i = 0; i < 3; ++i)
        {
            if (s[i] != t[i])
            {
                ++c;
            }
        }
        if (c <= 2)
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
#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    ll cnt = 0;

    for (ll i = 0; i < s1.size(); i++)
    {
        if (s1[i] != s2[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
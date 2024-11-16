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
        string s;

        cin >> s;
        ll ans = 0;
        ll curr = 0;
        ll i = curr + 1;

        while (i < n)
        {
            if (s[curr] != s[i])
            {

                curr = i;
                i++;
            }
            else
            {

                while (i < n && s[curr] == s[i])
                {
                    i++;
                }
                ans++;
                curr = i;
                i++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

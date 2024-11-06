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

        vector<int> v(n), ans;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll i = 0;
        while (n--)
        {
            ll k;
            string s;
            cin >> k >> s;
            ll ans_v = v[i];
            for (auto ch : s)
            {
                if (ch == 'D')
                {
                    ans_v += 1;
                    if (ans_v == 10)
                    {
                        ans_v = 0;
                    }
                }
                else if (ch == 'U')
                {
                    ans_v -= 1;
                    if (ans_v == -1)
                    {
                        ans_v = 9;
                    }
                }
            }
            ans.push_back(ans_v);
            i++;
        }
        for (auto val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
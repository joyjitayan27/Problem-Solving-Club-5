#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<char, int> mp;
    string target = "Timur";
    for (auto ch : target)
    {
        mp[ch]++;
    }
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if (n != target.size())
        {
            cout << "NO" << endl;
            continue;
        }
        map<char, int> m;
        for (auto ch : s)
        {
            m[ch]++;
        }

        bool flag = true;

        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] != mp[s[i]])
            {
                flag = false;
                break;
            }
        }
        if (flag)
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
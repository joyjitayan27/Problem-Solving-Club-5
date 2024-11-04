#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll ss, k;
        cin >> ss >> k;
        string target;
        cin >> target;

        map<char, int> mp;
        for (auto ch : target)
        {
            mp[ch]++;
        }

        ll odd_count = 0;

        for (auto val : mp)
        {
            ll first = val.first;
            ll second = val.second;
            if (second % 2 != 0)
            {
                odd_count++;
            }
        }

        if (k == 0 && odd_count <= 1)
        {
            cout << "YES" << endl;
        }
        else if (odd_count <= k || odd_count - k == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        // if ((k == 0 && odd_count <= 1) || (odd_count <= k +1))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
        mp.clear();
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<char> letters(26);
    for (int i = 0; i < 26; ++i)
    {
        letters[i] = 'a' + i;
    }

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll x;
        cin >> x;
        string s;
        cin >> s;

        vector<char> v;
        ll l = 0;

        while (l < x)
        {
            if (l + 2 < x && s[l + 2] == '0') // Check if it's a valid two-digit letter code
            {
                int index = (s[l] - '0') * 10 + (s[l + 1] - '0') - 1;
                v.push_back(letters[index]);
                l += 3; // Move past the two-digit sequence
            }
            else
            {
                int index = (s[l] - '0') - 1;
                v.push_back(letters[index]);
                l += 1; // Move past the single-digit sequence
            }
        }

        for (char c : v)
        {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}

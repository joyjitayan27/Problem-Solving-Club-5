#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll col;
        cin >> col;

        string s1, s2;
        cin >> s1;
        cin >> s2;

        for (int j = 0; j < col; j++)
        {
            if ((s2[j] == 'B' && s1[j] == 'G') || (s2[j] == 'G' && s1[j] == 'B'))
            {
                s2[j] = 'K';
                s1[j] = 'K';
            }
        }

        if (s1 == s2)
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

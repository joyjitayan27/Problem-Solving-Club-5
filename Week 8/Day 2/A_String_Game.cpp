#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, n;
    string s;
    cin >> t;

    while (t--)
    {
        cin >> n >> s;
        ll moves = 0;

        for (ll i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                moves++;
                i++;
            }
        }

        if (moves % 2 == 1)
            cout << "Zlatan\n";
        else
            cout << "Ramos\n";
    }

    return 0;
}

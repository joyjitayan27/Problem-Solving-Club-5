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
        ll n;
        cin >> n;

        if (n == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            string result = "";
            for (ll i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    result += 'A';
                }
                else
                {
                    result += 'B';
                }
            }

            cout << result << endl;
        }
    }

    return 0;
}
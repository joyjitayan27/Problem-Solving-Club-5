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

        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        ll s = 0;
       ll c = 0;

        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                c++;
            }
            else
            {
                if (s == a[i])
                {
                    c++;
                }
            }
            s += a[i];
        }

        cout << c << endl;
    }

    return 0;
}
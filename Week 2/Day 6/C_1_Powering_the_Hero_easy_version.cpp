#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> c(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        priority_queue<ll> bonus;
        ll totalPower = 0;

        for (ll i = 0; i < n; i++)
        {
            if (c[i] == 0)
            {
                if (!bonus.empty())
                {

                    totalPower += bonus.top();
                    bonus.pop();
                }
            }
            else
            {
                bonus.push(c[i]);
            }
        }

        cout << totalPower << endl;
    }

    return 0;
}

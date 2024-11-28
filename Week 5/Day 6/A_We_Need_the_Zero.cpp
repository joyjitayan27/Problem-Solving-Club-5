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

        ll A = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            A ^= a[i]; 
        }

      
        if (A % n == 0)
        {
            ll x = A / n;
         
            if (x >= 0 && x < 28)
            {
                cout << x << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
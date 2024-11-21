#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 0, ans = LLONG_MAX;
    ll sum = 0;
    while (r < n)
    {
        sum += a[r]; 
     
        while (sum >= k)
        {
            ans = min(ans, r - l + 1); 
            sum -= a[l]; 
            l++;
        }

        r++;
    }

   
    if (ans == LLONG_MAX)
        cout << -1 << endl; 
    else
        cout << ans << endl;

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    bool flag = false;
    ll ans;
    ll n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= k; i++)
    {
        ans = k * i;
        if (ans >= n && ans <= m)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}
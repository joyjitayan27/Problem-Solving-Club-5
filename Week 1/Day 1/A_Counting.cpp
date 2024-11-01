#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{

    ll n, m;
    cin >> n >> m;
    ll ans = m - n;
    if (ans > 0)
    {
        cout << ans + 1 << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
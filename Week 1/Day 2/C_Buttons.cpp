#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    ll n, m;
    cin >> n >> m;
    ll one, two, three;
    one = n + m;
    two = n + (n - 1);
    three = m + (m - 1);
    ll ans1 = max(one, two);
    ll ans2 = max(ans1, three);
    cout << ans2 << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll rcb, csk;
    cin >> rcb >> csk;
    ll ans = rcb - csk;
    if (ans >= 18)
    {
        cout << "RCB" << endl;
    }
    else
    {
        cout << "CSK" << endl;
    }

    return 0;
}
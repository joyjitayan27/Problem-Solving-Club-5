#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll N;
        cin >> N;

        ll x = 1;
        ll y = (N - 1) / 2;

        cout << x << " " << y << endl;
    }
    return 0;
}
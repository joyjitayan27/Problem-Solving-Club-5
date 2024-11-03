#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << '+' << endl;
        }
        else
        {
            cout << '-' << endl;
        }
    }

    return 0;
}
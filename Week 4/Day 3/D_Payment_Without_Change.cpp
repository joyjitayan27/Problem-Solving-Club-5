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
        ll a, b, n, S;
        cin >> a >> b >> n >> S;

        ll max_n_value = min(S / n, a) * n;
       

        ll remaining = S - max_n_value;

        if (remaining <= b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll A, B, T;
    cin >> A >> B >> T;
    ll count = 0;

    if (A > T)
    {
        cout << '0' << '\n';
    }
    else
    {
        ll i = 1;
        while (true)
        {
            ll multi = A * i;
            if (multi >= T + 0.5)
            {
                break;
            }
            count += B;
            i++;
        }
        cout << count << '\n';
    }

    return 0;
}

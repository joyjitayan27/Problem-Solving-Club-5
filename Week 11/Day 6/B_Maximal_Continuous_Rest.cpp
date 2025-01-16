#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   ll n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> b(2 * n);
    for (int i = 0; i < n; ++i)
    {
        b[i] = a[i];
        b[i + n] = a[i];
    }

   ll m = 0, c = 0;
    for (int i = 0; i < 2 * n; ++i)
    {
        if (b[i] == 1)
        {
            ++c;
            m = max(m, c);
        }
        else
        {
            c = 0;
        }
    }

    cout << m << endl;

    return 0;
}
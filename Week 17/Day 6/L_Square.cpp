#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        set<int> x, y;

        for (int i = 0; i < 4; i++)
        {
            int a, b;
            cin >> a >> b;
            x.insert(a);
            y.insert(b);
        }

        int s = abs(*x.begin() - *x.rbegin());
        cout << s * s << endl;
    }

    return 0;
}
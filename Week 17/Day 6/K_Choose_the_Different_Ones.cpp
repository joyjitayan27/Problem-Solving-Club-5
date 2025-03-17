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
        int x, y, z;
        cin >> x >> y >> z;
        vector<int> a(x), b(y);
        unordered_set<int> p, q, r;

        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
            if (a[i] <= z)
                p.insert(a[i]);
        }

        for (int i = 0; i < y; i++)
        {
            cin >> b[i];
            if (b[i] <= z)
                q.insert(b[i]);
        }

        for (int i = 1; i <= z; i++)
        {
            if (p.count(i) || q.count(i))
            {
                r.insert(i);
            }
        }

        if (r.size() == z && p.size() >= z / 2 && q.size() >= z / 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
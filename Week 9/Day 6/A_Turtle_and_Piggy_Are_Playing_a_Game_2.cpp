#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void s()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        bool tr = 1;
        while (v.size() > 1)
        {
            if (tr)
                v[0] = max(v[0], v[1]);
            else
                v[0] = min(v[0], v[1]);
            v.erase(v.begin() + 1);
            tr = !tr;
        }
        cout << v[0] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    s();
    return 0;
}

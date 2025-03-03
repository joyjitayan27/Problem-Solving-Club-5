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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end(), greater<int>());
        int s = accumulate(a.begin(), a.end(), 0);
        int m = 0;

        for (int i = 0; i < n; ++i)
        {
            int c = 0;
            for (int j = i; j < n; ++j)
            {
                c += -2 * a[j];
                m = max(m, c);
            }
        }

        cout << s + m << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> s(a.begin(), a.end());
        int uc = s.size();
        for (int k = 1; k <= n; k++)
        {
            cout << max(k, uc) << " ";
        }
        cout << "\n";
    }

    return 0;
}
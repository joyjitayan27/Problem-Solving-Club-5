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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int r = 0, g = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                r += a[i];
            }
            else if (a[i] == 0 && r > 0)
            {
                r--;
                g++;
            }
        }

        cout << g << endl;
    }

    return 0;
}
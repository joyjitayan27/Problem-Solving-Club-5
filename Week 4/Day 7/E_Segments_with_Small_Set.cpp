#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    unordered_map<int, int> f;
    int l = 0;
    long long good = 0;
    int unique = 0;

    for (int r = 0; r < n; ++r)
    {
     
        if (f[a[r]] == 0)
        {
            unique++;
        }
        f[a[r]]++;

        while (unique > k)
        {
            f[a[l]]--;
            if (f[a[l]] == 0)
            {
                unique--;
            }
            l++;
        }

        good += (r - l + 1);
    }

    cout << good << endl;

    return 0;
}
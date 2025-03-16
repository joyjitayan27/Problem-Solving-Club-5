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
        for (char a = 'a'; a <= 'z'; ++a)
        {
            for (char b = a; b <= 'z'; ++b)
            {
                for (char c = b; c <= 'z'; ++c)
                {
                    if ((a - 'a' + 1) + (b - 'a' + 1) + (c - 'a' + 1) == n)
                    {
                        cout << string(1, a) + string(1, b) + string(1, c) << endl;
                        goto x;
                    }
                }
            }
        }
    x:;
    }

    return 0;
}
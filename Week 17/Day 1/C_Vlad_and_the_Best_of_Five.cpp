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
        string x;
        cin >> x;
        int a = 0, b = 0;
        for (char c : x)
        {
            if (c == 'A')
                a++;
            else
                b++;
        }
        if (a > b)
        {
            cout << 'A' << "\n";
        }
        else
        {
            cout << 'B' << "\n";
        }
    }

    return 0;
}
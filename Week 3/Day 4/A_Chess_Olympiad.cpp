#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x, y, z;
    double me = 0, opo = 0;

    cin >> x >> y >> z;
    double remaining = 4 - (x + y + z);
    if (x > 0)
    {
        me = x;
    }
    if (z > 0)
    {
        opo = z;
    }
    me += y * 0.5;
    opo += y * 0.5;
    double final_me = me + remaining;
    if (final_me > opo)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
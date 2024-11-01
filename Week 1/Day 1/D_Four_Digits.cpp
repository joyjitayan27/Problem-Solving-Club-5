#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll slen = s.size();
    ll ans = 4 - slen;
    if (ans > 0)
    {
        for (int i = 1; i <= ans; i++)
        {
            cout << "0";
        }
        cout << s << endl;
    }
    else
    {
        cout << s << endl;
    }

    return 0;
}
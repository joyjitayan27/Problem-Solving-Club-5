#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tc;
    cin >> tc;
    while (tc--)
    {
        string a, b;
        ll a_x_cnt = 0, b_x_cnt = 0;
        cin >> a >> b;
        ll a_sz = a.size();
        ll b_sz = b.size();
        for (ll i = 0; i < a.size(); i++)
        {
            if (a[i] == 'X')
            {
                a_x_cnt++;
            }
        }
        for (ll i = 0; i < b.size(); i++)
        {
            if (b[i] == 'X')
            {
                b_x_cnt++;
            }
        }
        if (a == b)
        {
            cout << '=' << endl;
        }
        else if (a[a_sz - 1] == b[b_sz - 1])
        {
            if (a[a_sz -1] == 'S')
            {
                if (a_x_cnt > b_x_cnt)
                {
                    cout << '<' << endl;
                }
                else
                {
                    cout << '>' << endl;
                }
            }
            if (a[a_sz -1] == 'L')
            {
                if (a_x_cnt > b_x_cnt)
                {
                    cout << '>' << endl;
                }
                else
                {
                    cout << '<' << endl;
                }
            }
        }
        }

    return 0;
}
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

        int x = 0;
        int m = 1;

        while (true)
        {
            if (m % 2 == 1)
            {
                x -= (2 * m - 1);
            }
            else
            {
                x += (2 * m - 1);
            }

            if (abs(x) > n)
            {
                break;
            }

            m++;
        }

        if (m % 2 == 1)
        {
            cout << "Sakurako" << endl;
        }
        else
        {
            cout << "Kosuke" << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define all(x) x.begin(), x.end()
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fast();
    int t = 1;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.size();

        if (n == 1)
        {

            cout << str;
            cout << ((str[0] == 'z') ? 'a' : char(str[0] + 1)) << endl;
            continue;
        }

        bool printed = false;
        for (int i = 0; i < n - 1; i++)
        {
            cout << str[i];
            if (str[i] == str[i + 1] && !printed)
            {
                cout << ((str[i] == 'z') ? 'a' : char(str[i] + 1));
                for (int j = i + 1; j < n; j++)
                {
                    cout << str[j];
                }
                cout << endl;
                printed = true;
                break;
            }
        }
        if (!printed)
        {

            cout << str.back();
            cout << ((str.back() == 'z') ? 'a' : char(str.back() + 1)) << endl;
        }
    }
    return 0;
}

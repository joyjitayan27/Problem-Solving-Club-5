#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    set<string> set;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        auto find_to = set.find(s);
        if (find_to != set.end())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            set.insert(s);
        }
    }

    return 0;
}
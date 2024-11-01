#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, string> mp;
    int n, m;
    string name, ip;
    string comment, ip2;
    cin >> n >> m;
    while (n--)
    {
        cin >> name >> ip;
        mp[ip] = name;
    }
    while (m--)
    {
        cin >> comment >> ip2;
        ip2.pop_back();

        if (mp.find(ip2) != mp.end())
        {
            cout << comment << " " << ip2 << ';' << " " << '#' << mp[ip2] << '\n';
        }
    }

    return 0;
}
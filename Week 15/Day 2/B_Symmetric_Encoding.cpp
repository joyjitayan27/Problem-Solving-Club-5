#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void f(const string &a)
{
    set<char> b(a.begin(), a.end());
    string c(b.begin(), b.end());
    unordered_map<char, char> d;
    ll e = c.size();
    for (ll i = 0; i < e; i++)
    {
        d[c[i]] = c[e - 1 - i];
    }
    string g = a;
    for (char &h : g)
    {
        h = d[h];
    }
    cout << g << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll i;
    cin >> i;
    while (i--)
    {
        ll j;
        string k;
        cin >> j >> k;
        f(k);
    }

    return 0;
}
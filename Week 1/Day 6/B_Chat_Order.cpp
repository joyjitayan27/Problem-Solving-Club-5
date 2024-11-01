#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    map<string, int> mp;
    queue<string> st;
    vector<string> v;

    while (n--)
    {
        string s;
        cin >> s;

        v.push_back(s);
    }
    reverse(v.begin(), v.end());
    for (ll i = 0; i < v.size(); i++)
    {
        string s = v[i];
        if (mp[s] == 0)
        {
            st.push(s);
        }

        mp[s]++;
    }

    while (!st.empty())
    {
        cout << st.front() << endl;
        st.pop();
    }
    return 0;
}
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
    stack<string> st;
    while (tc--)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    vector<pair<char, char>> v;
    map<string, int> mp;
    while (!st.empty())
    {
        string topp = st.top();
        ll sz = topp.size();
        mp[topp]++;
        if (mp[topp] > 1)
        {
            st.pop();
        }
        else
        {
            v.push_back({topp[sz - 2], topp[sz - 1]});
            st.pop();
        }
    }
    for (auto val : v)
    {
        cout << val.first << val.second;
    }
    cout << endl;
    return 0;
}
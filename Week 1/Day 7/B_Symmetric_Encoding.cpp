#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string b;
        cin >> n >> b;

        set<char> unique(b.begin(), b.end());
        string r(unique.begin(), unique.end());

        map<char, char> mapping;
        int len = r.size();
        for (int i = 0; i < len; ++i)
        {
            mapping[r[i]] = r[len - i - 1];
        }
        string s;
        for (char ch : b)
        {
            s += mapping[ch];
        }

      
        cout << s << endl;
    }

    return 0;
}
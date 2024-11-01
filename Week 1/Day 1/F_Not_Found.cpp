#include <bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (char c : s)
    {
        mp[c]++;
    }
    bool flag = false;
    char ch;
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (mp[i] == 0)
        {
            ch = i;
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << ch << endl;
    }
    else
    {
        cout << "None" << endl;
    }
    return 0;
}
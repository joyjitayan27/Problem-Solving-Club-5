#include <bits/stdc++.h>
using namespace std;

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
        string s;
        cin >> s;
        int firstPosition = -1, lastPosition = -1;
        firstPosition = s.find('B');
        lastPosition = s.rfind('B');
        int ans = lastPosition - firstPosition + 1;
        cout << ans << '\n';
    }
    return 0;
}
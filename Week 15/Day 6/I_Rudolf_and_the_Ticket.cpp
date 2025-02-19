#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
void s()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> d(a), e(b);
    for (int i = 0; i < a; i++)
        cin >> d[i];
    for (int i = 0; i < b; i++)
        cin >> e[i];

    sort(d.begin(), d.end());
    sort(e.begin(), e.end());

    int f = 0;
    int g = b - 1;

    for (int i = 0; i < a; i++)
    {
        while (g >= 0 && d[i] + e[g] > c)
        {
            g--;
        }
        f += (g + 1);
    }

    cout << f << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h;
    cin >> h;
    while (h--)
    {
        s();
    }
    return 0;
}
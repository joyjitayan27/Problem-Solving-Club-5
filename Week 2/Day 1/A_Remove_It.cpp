#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll N, X;
    cin >> N >> X;
    vector<ll> v;
    while (N--)
    {
        int A;
        cin >> A;
        if (A != X)
        {
            v.push_back(A);
        }
    }
    for (auto val : v)
    {
        cout << val << " ";
    }

    return 0;
}
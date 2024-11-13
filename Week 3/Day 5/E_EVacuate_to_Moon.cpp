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
    while (tc--)
    {
        ll N, M, H;
        cin >> N >> M >> H;

        priority_queue<ll> maximumPower;
        priority_queue<ll> power;

        for (ll i = 0; i < N; i++)
        {
            ll x;
            cin >> x;
            maximumPower.push(x);
        }

        for (ll i = 0; i < M; i++)
        {
            ll x;
            cin >> x;
            power.push(x);
        }

        ll ans = 0;
        ll new_ans = 0;

        while (!maximumPower.empty() && !power.empty())
        {
            ll topp1 = maximumPower.top();
            ll topp2 = power.top();

            ans = H * topp2;

            if (ans > topp1)
            {
                ans = topp1;
            }
            new_ans += ans;

            power.pop();
            maximumPower.pop();
        }

        cout << new_ans << endl;
    }

    return 0;
}

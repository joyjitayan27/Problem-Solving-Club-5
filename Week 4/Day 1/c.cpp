#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int count0 = 0, count1 = 0;

        for (int i = 0; i < N; i++)
        {
            if (i == 0 || S[i] != S[i - 1])
            {

                if (S[i] == '0')
                {
                    count0++;
                }
                else
                {
                    count1++;
                }
            }
        }

        cout << min(count0, count1) << endl;
    }

    return 0;
}

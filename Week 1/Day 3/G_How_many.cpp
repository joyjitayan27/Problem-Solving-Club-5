#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, T;
    cin >> S >> T;

    int i, j, k, cnt = 0;
    for (i = 0; i <= S; i++)
    {
        for (j = 0; j <= S; j++)
        {
            for (k = 0; k <= S; k++)
            {
                if (i + j + k <= S && i * j * k <= T)
                {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}

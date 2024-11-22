#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int total_sum = 0;
        for (int x : arr)
        {
            total_sum += x;
        }

        if (total_sum < s)
        {
            cout << -1 << endl;
            continue;
        }

        if (total_sum == s)
        {
            cout << 0 << endl;
            continue;
        }

        int left = 0, current_sum = 0, max_length = 0;

        for (int right = 0; right < n; ++right)
        {
            current_sum += arr[right];

            while (current_sum > s)
            {
                current_sum -= arr[left];
                left++;
            }

            if (current_sum == s)
            {
                max_length = max(max_length, right - left + 1);
            }
        }

        cout << (n - max_length) << endl;
    }

    return 0;
}

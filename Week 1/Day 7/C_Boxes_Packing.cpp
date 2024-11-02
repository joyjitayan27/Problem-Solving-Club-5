#include <bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    
    map<int, int> freq;
    for (int size : a)
    {
        freq[size]++;
    }

    
    int mx = 0;
    for (const auto &entry : freq)
    {
        mx = max(mx, entry.second);
    }


    cout << mx<< endl;

    return 0;
}
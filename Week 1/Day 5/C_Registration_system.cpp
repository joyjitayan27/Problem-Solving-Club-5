#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> database;

    for (int i = 0; i < n; ++i)
    {
        string name;
        cin >> name;

        if (database[name] == 0)
        {
            cout << "OK" << endl;
            database[name] = 1;
        }
        else
        {
            int suff = database[name];
            string newName = name + to_string(suff);
            while (database[newName] > 0)
            {
                suff++;
                newName = name + to_string(suff);
            }
            cout << newName << endl;
            database[newName] = 1;
            database[name] = suff + 1;
        }
    }

    return 0;
}

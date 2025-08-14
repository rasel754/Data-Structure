#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string S;
        getline(cin, S);

        map<string, int> mp;
        stringstream ss(S);
        string word;

        string ansWord = "";
        int maxCount = 0;

        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > maxCount)
            {
                maxCount = mp[word];
                ansWord = word;
            }
        }

        cout << ansWord << " " << maxCount << endl;
    }

    return 0;
}
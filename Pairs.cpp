#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    int N;
    cin >> N;

    vector<pair<string, int>> v;

    for (int i = 0; i < N; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        v.push_back({s, x});
    }

    sort(v.begin(), v.end(), cmp);

    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
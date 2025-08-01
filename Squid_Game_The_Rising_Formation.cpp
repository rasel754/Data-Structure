#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int bit[MAXN];

void update(int idx, int val, int n)
{
    while (idx <= n)
    {
        bit[idx] += val;
        idx += (idx & -idx);
    }
}

int query(int idx)
{
    int sum = 0;
    while (idx > 0)
    {
        sum += bit[idx];
        idx -= (idx & -idx);
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }



        vector<long long> temp = a;
        sort(temp.begin(), temp.end());
        temp.erase(unique(temp.begin(), temp.end()), temp.end());

        unordered_map<long long, int> compress;
        for (int i = 0; i < temp.size(); i++)
        {
            compress[temp[i]] = i + 1; 
            
        }

        int m = temp.size(); 
        


        vector<int> left(n), right(n);
        fill(bit, bit + m + 2, 0);

        for (int i = 0; i < n; i++)
        {
            int val = compress[a[i]];
            left[i] = query(val - 1);
            update(val, 1, m);
        }



        fill(bit, bit + m + 2, 0);

        for (int i = n - 1; i >= 0; i--)
        {
            int val = compress[a[i]];
            right[i] = query(m) - query(val);
            update(val, 1, m);
        }



        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += 1LL * left[i] * right[i];
        }

        cout << ans << '\n';
    }

    return 0;
}

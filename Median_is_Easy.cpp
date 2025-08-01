#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> array(n);
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        vector<int> lastDigit(n);
        for (int i = 0; i < n; i++)
        {
            lastDigit[i] = array[i] % 10;
        }

        multiset<int> s;
        vector<int> result;
        multiset<int>::iterator mid = s.begin();

        for (int i = 0; i < n; i++)
        {
            int x = lastDigit[i];
            s.insert(x);

            if (s.size() == 1)
            {
                mid = s.begin();
            }
            else
            {

                if (s.size() % 2 == 1)
                {
                    if (x >= *mid)
                        ++mid;
                }
                else
                {
                    if (x < *mid)
                        --mid;
                }
            }

            result.push_back(*mid);
        }

        for (int val : result)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

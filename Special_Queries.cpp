#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    queue<string> qu;

    while (q--)
    {
        int zero;
        cin >> zero;

        if (zero == 0)
        {
            string name;
            cin >> name;
            qu.push(name);
        }
        else if (zero == 1)
        {
            if (!qu.empty())
            {
                cout << qu.front() << endl;
                qu.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isValidString(const string s)
{
    stack<char> st;

    for (char cha : s)
    {
        if (!st.empty())
        {
            if ((cha == '0' && st.top() == '1') || (cha == '1' && st.top() == '0'))
            {
                st.pop();
                continue;
            }
        }
        st.push(cha);
    }

    return st.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        if (isValidString(str))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

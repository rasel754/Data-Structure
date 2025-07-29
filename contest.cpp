// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int tc;
//     cin >> tc;

//     for (int i = 0; i < tc; i++)
//     {
//         int n;
//         cin >> n;
//         cout << n - 1 << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    cin.ignore();

    for (int i = 0; i < tc; i++)
    {
        string s;
        getline(cin, s);

        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'p')
            {
                s[j] = 'q';
            }
            else if (s[j] == 'q')
            {
                s[j] = 'p';
            }
        }
        cout << s << endl;
    }
    return 0;
}
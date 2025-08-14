#include <iostream>
#include <set>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        set<int> s;

        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        for (auto val : s)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

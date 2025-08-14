#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            int X;
            cin >> X;
            pq.push(X);
            cout << pq.top() << endl;
        }
        else if (cmd == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (cmd == 2)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop(); 
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top() << endl;
            }
        }
    }

    return 0;
}
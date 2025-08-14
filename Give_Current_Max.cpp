#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int roll;
    int marks;
};

struct cmp
{
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
            return a.roll > b.roll;
        return a.marks < b.marks;
    }
};

int main()
{
    int N;
    cin >> N;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < N; i++)
    {
        Student s;
        cin >> s.name >> s.roll >> s.marks;
        pq.push(s);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            Student s;
            cin >> s.name >> s.roll >> s.marks;
            pq.push(s);
            if (!pq.empty())
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 1)
        {
            if (!pq.empty())
            {
                Student top = pq.top();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    Student top = pq.top();
                    cout << top.name << " " << top.roll << " " << top.marks << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
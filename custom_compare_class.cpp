#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int rool;
    int marks;
    Student(string name, int rool, int marks)
    {
        this->name = name;
        this->rool = rool;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {
        if (l.marks > r.marks)
            return true;
        else if (l.marks < r.marks)
            return false;
        else
        {
            return l.rool > r.rool;
        }
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int rool, marks;
        cin >> name >> rool >> marks;

        Student obj(name, rool, marks);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().rool << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}
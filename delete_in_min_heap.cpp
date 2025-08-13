#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);

    int child_idx = v.size() - 1;

    while (child_idx != 0)
    {
        int parent_idx = (child_idx - 1) / 2;
        if (v[parent_idx] > v[child_idx])
            swap(v[parent_idx], v[child_idx]);
        else
            break;
        child_idx = parent_idx;
    }
}

void print_heap(vector<int> v)
{
    for (int x : v)

        cout << x << " ";
    cout << endl;
}

void delete_heap(vector<int> &v)
{
    cout << "deleted value is -> " << v[0] << endl;
    v[0] = v.back();
    v.pop_back();

    int cur_idx = 0;
    while (true)
    {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;

        int left_val = INT_MAX, right_val = INT_MAX;

        if (left_idx < v.size())
            left_val = v[left_idx];
        if (right_idx < v.size())
            right_val = v[right_idx];

        if (left_val <= right_val && left_val < v[cur_idx])
        {
            swap(v[left_idx], v[cur_idx]);
            cur_idx = left_idx;
        }
        else if (right_val < left_val && right_val < v[cur_idx])
        {
            swap(v[right_idx], v[cur_idx]);
            cur_idx = right_idx;
        }
        else
            break;
    }
}

int main()
{
    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}
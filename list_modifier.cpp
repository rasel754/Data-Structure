#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60,10};
    // cout << *next(l.begin(), 2)<<endl;

    // insert any postion
    // l.insert(next(l.begin(),2),100);

    list<int> l2 = {40, 50, 60};
    vector<int> v = {40, 50, 60};
    // insert full vactor
    // l.insert(next(l.begin(),2),l2.begin(),l2.end());

    // vector insert
    // l.insert(next(l.begin(), 2), v.begin(), v.end());

    // erase modifier
    // l.erase(next(l.begin(),3));

    // multi value delete
    // l.erase(next(l.begin(), 3), next(l.begin(), 5));

    replace(l.begin(),l.end(),10,100);

    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 30, 40, 10, 10};
    // remove value
    // l.remove(10);

    // sort
    // l.sort();//assending order sort
    //  l.sort(greater<int>()); //desending order sort

    // l.unique(); // list must be sorted for perfact result using this function
    // l.reverse();

    for (int val : l)
    {
        cout << val << " " << endl;
    }

    cout << l.back() << endl;
    cout << l.front() << endl;
    cout<<*next(l.begin(),3);
    return 0;
}
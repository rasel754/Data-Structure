#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int>l;         `         //declared a list
    //  list<int>l(10);                declared a list with length
    //  list<int>l(10,5);            //declared a list with length and value , length is 10 value is 5

    // cout<<*l.begin()<<endl;    // l.begin() is iterator , for dereference iterator we use *

    // print list using iterator
    //  for(auto it=l.begin(); it!=l.end(); it++){
    //      cout<<*it<<" ";
    //  }

    // value based list print
    // for(int val : l){
    //     cout<<val<< " ";
    // }

    // list copy
    // list<int> li = {1, 2, 3, 4, 5};
    // list<int> li2(li);

    // for (int val : li2)
    // {
    //     cout << val << " ";
    // }


    // array copy
    // int a[3] = {10, 20, 30};
    // list<int> l(a, a + 3);
    // for (int val : l)
    // {
    //     cout << val << " ";
    // }


    // vector copy
      vector<int>v = {10, 20, 30};
    list<int> l(v.begin(), v.end());
    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}
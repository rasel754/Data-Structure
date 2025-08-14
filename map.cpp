#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    mp["rasel"] = 5;
    mp["shoel"] = 9;
    mp["rana"] = 4;
    mp["siuuu"] = 8;


    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << "->" << it->second << endl;
    }

      // key check
    if(mp.count("messi"))
    cout<<" ache "<<endl;
    else
    cout<<"nai"<<endl;

    return 0;

  
}
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,6,78,8,76,12};
    vector<int>v2={100,200,300};

    // v.insert(v.begin()+2 , v2.begin(),v2.end());

    v.erase(v.begin()+2,v.begin()+5);
    for(int x : v){
        cout<<x<<" ";
    }

    return 0;
}
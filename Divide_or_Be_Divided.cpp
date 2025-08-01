#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,x,y;
    cin>>n>>x>>y;

    string digit;
    cin>>digit;

    int digitX = digit[x-1]-'0';
    int digitY = digit[y-1]-'0';

     if ((digitX != 0 && digitY % digitX == 0) || (digitY != 0 && digitX % digitY == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--)
    {
        long long int n;
        cin>>n;

        vector<long long int>stone(n);

        int evenStone=0;
        int oddStone=0;

        for (int i = 0; i < n; i++)
        {
            cin>>stone[i];

            if(stone[i]%2==0){
                evenStone++;
            }else{
                oddStone++;
            }
        }

        int evenPos= n/2;
        int oddPos = n-evenPos;

        if ((evenStone == evenPos && oddStone == oddPos) ||
            (evenStone == oddPos && oddStone == evenPos)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        


    }
    
    return 0;
}
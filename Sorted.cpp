#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n; 
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int flag=0;
        for(int i=1; i<n; i++){
            if(a[i]<a[i-1]){
                flag=1;
                break;
            }
        }
        if(flag==1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}
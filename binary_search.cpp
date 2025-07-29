#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n; 

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int tar;
    cin>>tar;
    int flag=0;

    int l=0;
    int r=n-1;

    while (l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]==tar){
            flag=1;
            break;
        }else if (a[mid]<tar)
        {
            l=mid+1;
        }
        else{
            r=mid+1;
        }
        
    }
    if(flag==1){
        cout<<"found"<<endl;
    }
    else{
    cout<<"not found"<<endl;
    }
    
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n; i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n; i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }


//another way

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     vector<int>v;
//     for(int i=0;i<n; i++){
//         int x;
//         cin>>x;

//         v.push_back(x);
//     }
//     for(int i=0;i<n; i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

//string input output
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n;

//     vector<string>v(n);
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }
//     for(string s:v){
//         cout<<s<<endl;
//     }
//     return 0;
// }

//if string have space 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    cin.ignore();
    vector<string>v(n);
    for(int i=0; i<n; i++){
        getline(cin,v[i]);
    }
    for(string s:v){
        cout<<s<<endl;
    }
    return 0;
}
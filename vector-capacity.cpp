
// //vactor capacity + vactor push back +vector size
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v;

//     cout<<v.capacity()<<endl;

//     v.push_back(13);
//     cout<<v.capacity()<<endl;
//     v.push_back(13);
//     cout<<v.capacity()<<endl;
//     v.push_back(13);
//     cout<<v.capacity()<<endl;
//     v.push_back(13);
//     cout<<v.capacity()<<endl;
//     v.push_back(13);
//     cout<<v.capacity()<<endl;
//     v.push_back(13);
//     cout<<v.capacity()<<endl;
//     v.push_back(13);
//     cout<<v.capacity()<<endl;
//     v.push_back(13);
//     cout<<v.capacity()<<endl;
//     cout<<"size:"<<v.size();
//     return 0;
// }

//vector clear 
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout<<v.size()<<endl;
    v.clear();
    cout<<v.size()<<endl;

    return 0;
}
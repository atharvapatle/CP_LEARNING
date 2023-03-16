#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="codeforces";
    int m;
    cin>>m;
    while(m--){
     char x;
     cin>>x;
     if(find(s.begin(),s.end(),x)!=s.end()){
        cout<<"Yes";
        cout<<endl;
     }
     else cout<<"NO"<<endl;
    }
}
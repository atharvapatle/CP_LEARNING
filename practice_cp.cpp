#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcd";
    map<char, int> m;
    for (auto i : s)
    {
        m[i]++;
    }


int ans=0;
    for(auto i:m){
     if(i.second%2==0){
        ans+=i.second;
     }
    }
    int odd=0;
    for(auto i:m){
     if(i.second%2!=0){
        if (i.second>odd)
        {
            odd=i.second;
        }
        
     }
    }
    cout<<ans+odd;
 
}
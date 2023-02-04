#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector<int>  que;
   que.push_back(13);
   que.push_back(45);
   que.push_back(12);
   vector<int> ans;
  
   for(int i=que.size()-1;i>=0;i--){
    int a=que[i];
    while (a>0)
    {
        int c=a%10;
        ans.push_back(c);
        a=a/10;
    }
    
   }
   reverse(ans.begin(),ans.end());
   for(int k:ans){
    cout<<k<<" ";
   }
 
}
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr,int t){
int mid=0,left=0;
int right=arr.size()-1;
mid=left+(right-left)/2;
while(left<right){
   if (arr[mid]>=arr[0])
   {
      left=mid+1;
   }
   else
   {
    right=mid;
   }
    mid=left+(right-left)/2;
  
   
}
return left;
}

int main(){
    vector<int> arr={3,5,9,1,2};
    int ans=solve(arr,7);
    cout<<ans;

}

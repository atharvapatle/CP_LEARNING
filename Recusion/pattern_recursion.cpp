#include<bits/stdc++.h>
using namespace std;

int boss=5;

void printt(int n){
    if(n==0) return;

    cout<<"*";
    printt(n-1);
}

void solve(int n){
   if (n==0)
   {
    return;
   }
   printt(n);
   cout<<endl;
   solve(n-1);
   
   
}

int main(){

solve(5);        
}
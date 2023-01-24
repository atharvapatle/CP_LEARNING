#include<bits/stdc++.h>
using namespace std;
int sum=1;
void solve(int n){
    if(n==0) return ;
    
    sum=sum*n;
    solve(n-1);
    
}

int main(){
    
int n;
n=5;
solve(n);
cout<<sum;
        
}
    


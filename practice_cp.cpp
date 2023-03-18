#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=10;
    string s="";
        while(n){
        int t=n%2;
        char c=char(t+'0');
        s+=c;
        n=n/2;
        }
        cout<<s;
        
    }
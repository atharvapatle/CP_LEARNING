#include<bits/stdc++.h>
using namespace std;

void powerSet(string s,int index,string curr){
    int n=s.length();
    if (index==n)
    {
        cout<<curr<<",";
        return;
    }

    powerSet(s,index+1,curr+s[index]);
    powerSet(s,index+1,curr);

    
}

int main(){
    string s = "abc";
    string j="";
    powerSet(s,0,j);
}
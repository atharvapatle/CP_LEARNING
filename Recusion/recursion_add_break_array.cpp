#include <bits/stdc++.h>
using namespace std;
int sum = 1;

void brk_fun(vector<int> &a, vector<int> &c, int k)
{
    int f = k;
    while (k > 0)
    {
        int d = k % 10;
        a.push_back(d);
        k = k / 10;
    }
   // a.push_back(k);
    int l1 = a.size();
    for (int i = l1 - 1; i >= 0; --i)
    {
        c.push_back(a[i]);
    }
}



void solve(vector<int> a, vector<int> b, vector<int> &c, int n)
{
    for (int i = 0; i < n; i++)
    {
        int k = a[i] + b[i];
        vector<int> brk_arr;
        brk_fun(brk_arr, c, k);
    }

    int high = max(a.size(), b.size());

    for (int i = n; i < high; i++)
    {
        vector<int> brk_arr;
        if (a.size() > b.size())
        {
            brk_fun(brk_arr,c, a[i]);
        }
        else
        {
            brk_fun(brk_arr,c, b[i]);       
        }
        
    }
}

int main()
{

    vector<int> a = {23, 5, 2}, b = {4, 67, 2, 8};
    int l1 = a.size();
    int l2 = b.size();

    int t = min(l1, l2);
    vector<int> c;
    solve(a, b, c, t);
    for(int i : c){
        if(i!=0)
        cout<<i<<",";
    }
}
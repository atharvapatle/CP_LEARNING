#include <bits/stdc++.h>
using namespace std;

int t=0;

void printArr(vector<int> a)
{
    int sum = 0;
    for (int i : a)
    {
        sum += i;
    }
    if (sum == 5)
    {
        t++;
    }
}

void powerSet(vector<int> a, int index, vector<int> j)
{
    int n = a.size();
    if (index == n)
    {  
        printArr(j);
        return;
    }
    j.push_back(a[index]);
    powerSet(a, index + 1, j);
    j.pop_back();
    powerSet(a, index + 1, j);
    
}

int main()
{
    vector<int> a = {3, 1, 2,4, 5};
    int k = 10;
    vector<int> j;
    powerSet(a, 0, j);
    cout<<t;
}
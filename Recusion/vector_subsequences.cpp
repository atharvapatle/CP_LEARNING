#include <bits/stdc++.h>
using namespace std;

void printArr(vector<int> a)
{
    int sum = 0;
    for (int i : a)
    {
        sum += i;
    }
    if (sum == 10)
    {
        for (int i : a)
        {
            cout << i;
        }
        cout<<endl;
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
    vector<int> a = {3, 1, 2, 5, 4};
    vector<int> j;
    int k=0;
    powerSet(a, 0, j);
}
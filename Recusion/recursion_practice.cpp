#include <bits/stdc++.h>
using namespace std;

int sumAll(int n)
{
    if (n == 0)
        return n;

    return n+sumAll(n - 1);
}

int main()
{

    int n = 5;
    
    cout << sumAll(n);
}
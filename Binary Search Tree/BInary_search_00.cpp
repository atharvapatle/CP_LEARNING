#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int t)
{
    int mid = 0, left = 0;
    int right = arr.size() - 1;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == t)
            return mid;
        if (arr[mid] > t)
            right = mid - 1;
        if (arr[mid] < t)
            left = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 4, 5, 7, 9};
    int ans = solve(arr, 7);
    cout << ans;
}

#include <bits/stdc++.h>
using namespace std;

set<int> st;
// void printGraph(map<int,vector<int>> a, int n, int m)
// {
//     for (auto i : a)
//     {
//         cout << i.first << " -> ";
//         for (auto j : i.second)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// void createGraph(map<int,vector<int>> &a, int n, int m)
// {

//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         a[u].push_back(v);
//         a[v].push_back(u);
//     }
// }

// void printGraph(vector<int> a[], int n, int m)
// {
//         for (auto i : st)
//     {
//         cout << i<<" -> ";
//         for (auto j : a[i])
//         {
//             cout << j<<" ";
//         }
//         cout<<endl;
//     }
// }

// void createGraph(vector<int> a[], int n, int m)
// {
//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         a[u].push_back(v);
//         a[v].push_back(u);
//         st.insert(u);
//         st.insert(v);
//     }
// }

int main()
{
    int n, m;
    cout << "Number of nodes"
         << " : ";
    cin >> n;
    cout << "Number of edges"
         << " : ";
    cin >> m;
    vector<int> a[n];
    // createGraph(a, n, m);

    // printGraph(a, n, m);
}
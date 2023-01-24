#include <bits/stdc++.h>
using namespace std;



void createGraph(map<int, vector<int>> adj, int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
}

int main()
{
    int m, n;
    cout << "Enter the nodes :";
    cin >> n;
    cout << "Enter the edges :";
    cin >> m;
    map<int, vector<int>> adj;
    createGraph(adj, n, m);
    for (auto &&i : adj)
    {
        cout<<i.first<<"-> ";
        for (auto &&j : i.second)
        {
            cout<<j<<" ";
            
        }
        
    }
    
}
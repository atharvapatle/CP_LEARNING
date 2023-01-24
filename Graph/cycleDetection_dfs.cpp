#include <bits/stdc++.h>
using namespace std;

set<int> st;

bool checkCycle(vector<vector<int>> &adj, unordered_map<int, bool> &vs, int k)
{
    unordered_map<int, int> parent;
    vs[k] = 1;
    parent[k] = -1;

    for (auto i : adj[k])
    {
        if (!vs[i])
        {

            // vs[i] = 1;
            if (vs[i] and parent[k] != i)
            {
                return true;
            }
            
        }
    }

    return false;
}

void cycle(vector<vector<int>> &adj, int n, int m)
{
    unordered_map<int, bool> vs;
    for (auto i : st)
    {
        if (!vs[i])
        {
            bool ans = checkCycle(adj, vs, i);
            if (ans)
            {
                cout << "Yes";
                return;
            }
            else
            {
                cout << "NO";
                return;
            }
        }
    }
}

void createGraph(vector<vector<int>> &adj, int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        st.insert(u);
        st.insert(v);
    }
}

int main()
{
    int m, n;
    cout << "Number of nodes: ";
    cin >> n;
    cout << "Number of edges: ";
    cin >> m;
    vector<vector<int>> adj(10000);
    createGraph(adj, n, m);
    cycle(adj, n, m);
    // for(auto i: st){
    //     cout<<i<<" -> ";
    //     for(auto j: adj[i]){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;

    // }
}
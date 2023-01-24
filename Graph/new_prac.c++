#include <bits/stdc++.h>
using namespace std;

set<int> st;

bool bfs(map<int, set<int>> a, int n, int m)
{
    unordered_map<int, int> inDegree;
    // FIND ALL INDEGREE

    for (auto &&i : a)
    {
        for (auto &&j : i.second)
        {
            inDegree[j]++;
        }
    }
    queue<int> q;

    for (int i = 0; i < n; i++)
    {
        if (!inDegree[i])
        {
            q.push(i);
            
        }
        
    }
    vector<int> ans;
    
    while (!q.empty())
    {
        int frontNode=q.front();
        q.pop();

        ans.push_back(frontNode);

        for (auto &&r : a[frontNode])
        {
            inDegree[r]--;
            if (inDegree[r]==0)
            {
                q.push(r);
            }
            
        }
        
    }

    if (ans.size()==n)
    {
        return true;
    }
    return false;
    

}

void createGraph(map<int, set<int>> &a, int n, int m)
{

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].insert(v);
    }
}

int main()
{
    int n, m;
    cout << "Number of nodes"
         << " : ";
    cin >> n;
    cout << "Number of edges"
         << " : ";
    cin >> m;
    map<int, set<int>> mp;
    createGraph(mp, n, m);
    bfs(mp, n, m);
}
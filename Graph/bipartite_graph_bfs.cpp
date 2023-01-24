#include <bits/stdc++.h>
using namespace std;

set<int> st;
bool printBFS(map<int, set<int>> a, int i,vector<int> color)
{
    queue<int> q;
    q.push(i);
    // visited[i] = 1;
    
    color[i]=0;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        // cout << frontNode << " ";
        for (auto i : a[frontNode])
        {
            if (color[i]==-1)
            {
                q.push(i);
                color[i]==!color[frontNode];
            }
            else if (color[i]==color[frontNode])
            {
                return false;
            }
        }
    }
    return true;
}

void bfs(map<int, set<int>> a, int n, int m)
{
    // unordered_map<int, bool> visited;
    vector<int> color(n,-1);
    // vector<int, bool> color;
    for (int i = 0; i < n; i++) // for disconnected graph
    {
        if (color[i]==-1) // this will check ith node is visited or not.
        {
            printBFS(a, i,color);
        }
    }
}

void createGraph(map<int, set<int>> &a, int n, int m)
{

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].insert(v);
        a[v].insert(u);
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
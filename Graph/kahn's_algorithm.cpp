#include <bits/stdc++.h>
using namespace std;

//IF WE ARE UNANBLE TO FIGURE OUT A TOPOLOGICAL SORT, THERE IS A CYCLE!


void printBFS(map<int, set<int>> &a, unordered_map<int, int> &inDegree, int i, int n)
{
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (inDegree[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        cout << frontNode << " ";

        for (auto k : a[frontNode])
        {
            inDegree[k]--;
            if (inDegree[k] == 0)
            {
                q.push(k);
            }
        }
    }
}

void bfs(map<int, set<int>> a, int n, int m)
{
    unordered_map<int, int> inDegree;
    for (auto i : a)
    {
        for (auto j : i.second)
        {
            inDegree[j]++;
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
        // a[v].insert(u);
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
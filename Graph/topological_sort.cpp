#include <bits/stdc++.h>
using namespace std;

// set<int> st;
void printDFS(map<int, set<int>> &a, unordered_map<int, bool> &visited, int i, stack<int> &st)
{
    visited[i] = 1;
    cout << i << " ";
    for (auto j : a[i])
    {
        if (!visited[j])
        {
            printDFS(a, visited, j,st);
        }
    }
    st.push(i);
}

void dfs(map<int, set<int>> a, int n, int m)
{
    unordered_map<int, bool> visited;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            printDFS(a, visited, i, st);
        }
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
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
    dfs(mp, n, m);
}
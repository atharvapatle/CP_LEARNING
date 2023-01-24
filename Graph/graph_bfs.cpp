#include <bits/stdc++.h>
using namespace std;

set<int> st;
void printBFS(map<int, set<int>> a, unordered_map<int, bool> &visited, int i)
{
	queue<int> q;
	q.push(i);
	visited[i] = 1;

	while (!q.empty())
	{
		int frontNode = q.front();
		q.pop();

		cout << frontNode << " ";
		for (auto i : a[frontNode])
		{
			if (!visited[i])
			{
				q.push(i);
				visited[i]=1;
			}
			
		}
	}
}

void bfs(map<int, set<int>> a, int n, int m)
{
	unordered_map<int, bool> visited;
	for (int i = 0; i < n; i++)// for disconnected graph
	{
		if (!visited[i]) // this will check ith node is visited or not.
		{
			printBFS(a, visited, i);
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
	bfs(mp,n,m);
}
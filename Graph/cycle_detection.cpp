#include <bits/stdc++.h>
using namespace std;

set<int> st;


bool cycleDetection(int k,unordered_map<int,bool> &visited,map<int, set<int>> &a) {
    unordered_map<int,int> parent;

    parent[k]=-1;
    visited[k]=true;

    queue<int> q;
    q.push(k);

    while (!q.empty())
    {
        int frontNode=q.front();
        q.pop();

        for(auto j:a[frontNode]){
            if (visited[j]==true and j!=parent[frontNode])
            {
                return true;
            }
            else if (!visited[j])
            {
                q.push(j);
                visited[j]=1;
                parent[j]=frontNode;
            }
            
            
        }
    }
    return false;
}

void bfs(map<int, set<int>> a, int n, int m){
    unordered_map<int, bool> visited;
	

	for (int i = 0; i < n; i++)
	{
		if (!visited[i]) // this will check ith node is visited or not.
		{
			 bool ans=cycleDetection(i, visited, a);
             if (ans)
             {
                cout<<"Yes";
             }
             else
             {
                cout<<"NO";
             }
             
             
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
#include <bits/stdc++.h>
using namespace std;

//set<int> st; 
void printDFS(map<int, set<int>> &a, unordered_map<int, bool> &visited, int i)
{
  visited[i]=1;
  cout<<i<<" ";
  for(auto j:a[i]){
	if (!visited[j])
	{
		printDFS(a,visited,j);
	}
	
  }


}

void dfs(map<int, set<int>> a, int n, int m)
{
	unordered_map<int, bool> visited;
	// for (int i=0; i<n;i++)
	// {
	// 	if (!visited[i])
	// 	{
	// 		printDFS(a,visited,i);
	// 	}
		
	// }
	printDFS(a,visited,4);
	

    

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
	dfs(mp,n,m);
}
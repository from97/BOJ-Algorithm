#include <bits/stdc++.h>
using namespace std;

int	visit[1001];

void	bfs(vector<int> *g, int v, int n)
{
	queue<int>	q;
	for (int i = 0; i < n + 1; i++)
		visit[i] = 0;

	q.push(v);
	visit[v] = 1; //visited

	while (!q.empty())
	{
		int	prev = q.front();
		q.pop();
		cout << prev << ' ';
		int	len = g[prev - 1].size();
		for (int i = 1; i < len; i++)
		{
			int nxt = g[prev - 1][i];
			if (visit[nxt] == 0)
			{
				q.push(nxt);
				visit[nxt] = 1;
			}
		}
	}
}

void	dfs(vector<int> *g, int v, int n)
{
	cout << v << ' ';
	visit[v] = 1;
	int	size = g[v - 1].size();
	for (int i = 1; i < size; i++)
	{
		int nxt = g[v - 1][i];
		if (visit[nxt] == 0)
			dfs(g, nxt, n);
	}
}

int	desc(int a, int b)
{
	return (a > b);
}

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	n, m, v;
	int	a, b;
	cin >> n >> m >> v;
	vector<int> g[n];
	for (int i = 0; i < n; i++)
		g[i].push_back(i + 1);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		g[a - 1].push_back(b);
		g[b - 1].push_back(a);
	}
	for (int i = 0; i < n; i++)
		sort(g[i].begin() + 1, g[i].end());
	dfs(g, v, n);
	cout << '\n';
	memset(visit, 0, sizeof(visit));
	bfs(g, v, n);
}

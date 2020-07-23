#include <bits/stdc++.h>
using namespace std;

//stack<int> s[3];
vector<pair<int, int>> v;

void	move(int from, int to)
{
//	int disk = s[from].top();
//	s[to].push(disk);
//	s[from].pop();
	v.push_back(make_pair(from + 1, to + 1));
}

int		get_spare(int from, int to)
{
	for (int i = 0; i < 3; i++)
	{
		if (i != from && i != to)
			return (i);
	}
	return (-1);
}

int		solve(int disk, int from, int to)
{
	if (disk == 0)
		return (1);
	int spare = get_spare(from, to);
	solve(disk - 1, from, spare);
	move(from, to);
	solve(disk - 1, spare, to);
	return (0);
}

int		main(void)
{
	int n;
	int mv_count;
	cin >> n;
	/*
	for (int i = 1; i <= n; i++)
		s[0].push(i);
	*/
	solve(n, 0, 2);
	mv_count = v.size();
	cout << mv_count << '\n';
	for (int i = 0; i < mv_count; i++)
		cout << v[i].first << ' ' << v[i].second << '\n';
}

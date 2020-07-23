#include <bits/stdc++.h>
using namespace std;

char lc[128];
char rc[128];

void	pre_traverse(char p)
{
	cout << p;
	if (lc[p] != 0) pre_traverse(lc[p]);
	if (rc[p] != 0) pre_traverse(rc[p]);
}

void	in_traverse(char p)
{
	if (lc[p] != 0) in_traverse(lc[p]);
	cout << p;
	if (rc[p] != 0) in_traverse(rc[p]);
}

void	post_traverse(char p)
{
	if (lc[p] != 0) post_traverse(lc[p]);
	if (rc[p] != 0) post_traverse(rc[p]);
	cout << p;
}

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int	n;
	cin >> n;

	char p, l, r = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> p >> l >> r;
		if (l != '.') lc[p] = l;
		if (r != '.') rc[p] = r;
	}
	pre_traverse('A');
	cout << '\n';
	in_traverse('A');
	cout << '\n';
	post_traverse('A');
}

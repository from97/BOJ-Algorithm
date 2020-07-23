#include <bits/stdc++.h>
using namespace std;

vector<int> getPi(string p) //º£³¤ÇÔ¼ö
{
	int m = (int)p.size(), j = 0;
	vector<int> pi(m, 0);
	for (int i = 1; i < m; i++)
	{
		while (j > 0 && p[i] != p[j])
			j = pi[j - 1];
		if (p[i] == p[j])
			pi[i] = ++j;
	}
	return (pi);
}

int	main(void)
{
	string t, p;
	vector<int> answr;
	getline(cin, t);
	getline(cin, p);
	int n = t.size(), m = p.size();
	auto pi = getPi(p);

	int j = 0;
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		while (j > 0 && t[i] != p[j])
			j = pi[j - 1];
		if (t[i] == p[j])
		{
			if (j == m - 1)
			{
				count++;
				answr.push_back(i - j + 1);
				j = pi[j];
			}
			else
				j++;
		}
	}
	cout << count << '\n';
	for (auto a : answr)
		cout << a << ' ';
}

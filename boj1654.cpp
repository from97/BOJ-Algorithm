#include <bits/stdc++.h>
using namespace std;

int k, n;

bool	is_possible(long long *lans, int cnt)
{
	int l = 0;
	for (int i = 0; i < k; i++)
		l += lans[i] / cnt;
	if (l >= n)
		return (true);
	return (false);
}

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> k >> n;

	long long max, min;
	long long *lans = new long long[k];
	for (int i = 0; i < k; i++)
		cin >> lans[i];
	sort(lans, lans + k);
	max = lans[k - 1];
	min = 1;

	long long cnt;
	long long result = 0;
	while (min <= max)
	{
		cnt = (min + max) / 2;
		if (is_possible(lans, cnt))
			min = cnt + 1;
		else
			max = cnt - 1;
	}
	cnt = (min + max) / 2;
	cout << cnt;
}

#include <bits/stdc++.h>
using namespace std;

int n, c = 0;

int	count_dist(int *house, int dist)
{
	int count = 1;
	int i = 0;
	while (i < n - 1)
	{
		int j = i + 1;
		while (j < n)
		{
			if (house[j] - house[i] >= dist)
			{
				count++;
				i = j;
				break ;
			}
			j++;
		}
		if (j == n) i++;
	}
	return (count);
}

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> c;
	int	*house = new int[n];
	for (int i = 0; i < n; i++)
		cin >> house[i];
	sort(house, house + n);
	int min = 1;
	int max = house[n - 1] - house[0];
	int result = min;
	while (min <= max)
	{
		int mid = (min + max) / 2;
		if (count_dist(house, mid) >= c)
		{
			if (mid > result)
				result = mid;
			min = mid + 1;
		}
		else
			max = mid - 1;
	}
	cout << result;
}

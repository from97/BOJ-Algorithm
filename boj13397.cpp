#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	//입력값 저장
	int	n, m;
	cin >> n >> m;
	int	*arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int left = 0;
	int right = 9999;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		int count = 1;
		int min = arr[0];
		int max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max) max = arr[i];
			if (arr[i] < min) min = arr[i];
			int score = max - min;
			if (score > mid)
			{
				min = arr[i];
				max = arr[i];
				count++;
			}
		}
		if (count > m)
			left = mid + 1;
		else
			right = mid - 1;
	}
	cout << left;
	return (0);
}

#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	int	n, m, a, flag;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a;
		int st = 0;
		int ed = n - 1;
		flag = 0;
		while (st <= ed)
		{
			int mid = (st + ed) / 2;
			if (a == arr[mid])
			{
				flag = 1;
				break ;
			}
			else if (a > arr[mid])
				st = mid + 1;
			else
				ed = mid - 1;
		}
		cout << flag << '\n';
	}
}

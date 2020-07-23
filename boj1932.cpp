#include <bits/stdc++.h>
using namespace std;

int arr[501][501]; //전역에 선언하면 자동으로 0으로 초기화

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, ret = 0;
	cin >> n;
	//2차원 배열에 저장하기
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			cin >> arr[i][j];
	//DP
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			arr[i][j] += max(arr[i - 1][j], arr[i - 1][j - 1]);
			if (ret < arr[i][j]) ret = arr[i][j];
		}
	}
	cout << ret;
}

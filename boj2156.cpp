#include <bits/stdc++.h>
using namespace std;

int	arr[10001];
int dp[10001];

int		get_max(int a, int b, int c)
{
	return (max(max(a, b), c));
}

int		main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	//dp[n] : N���ܱ��� ������ ��, ���� �ִ�� ���� �� �ִ� ��
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	for (int i = 3; i <= n; i++)
	{
		int a = dp[i - 1]; //i �ȸ���
		int b = dp[i - 3] + arr[i - 1] + arr[i]; //i ���� & i-1 ����
		int c = dp[i - 2] + arr[i]; //i ���� & i-1 �ȸ���
		dp[i] = get_max(a, b, c);
	}
	cout << dp[n];
}

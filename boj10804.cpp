#include <bits/stdc++.h>
using namespace std;

int		main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	int arr[21];
	for (int i = 0; i <= 20; i++)
		arr[i] = i;
	for (int i = 0; i < 10; i++)
	{
		cin >> a >> b;
		for (int i = 0; i <= (b - a)/2; i++)
		{
			swap(arr[a + i], arr[b - i]);
		}
	}
	for (int i = 1; i <= 20; i++)
		cout << arr[i] << ' ';
}

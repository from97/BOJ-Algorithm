#include <bits/stdc++.h>
using namespace std;

int    talls[100];

int		main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[9];
    int t, sum = 0;
    for(int i = 0; i < 9; i++)
    {
        cin >> t;
        talls[t]++;
		arr[i] = t;
        sum += t;
    }
	sum -= 100;
	int a, b;
	for (int i = 0; i < 9; i++)
	{
		a = arr[i];
		b = sum - arr[i];
		if (talls[b] && a != b) break;
	}
	sort(arr, arr + 9);

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] != a && arr[i] != b)
			cout << arr[i] << '\n';
	}

}

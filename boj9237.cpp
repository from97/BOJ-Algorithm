#include <bits/stdc++.h>
using namespace std;

int	desc(int a, int b)
{
	return (a > b);
}

int	main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	//	입력받기
	int	n;
	cin >> n;
	int *t = new int[n];
	for (int i = 0; i < n; i++)
		cin >> t[i];
	//	내림차순 정렬
	sort(t, t + n, desc);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		t[i] = t[i] + i + 2;
		if (t[i] > count)
			count = t[i];
	}
	cout << count;
}

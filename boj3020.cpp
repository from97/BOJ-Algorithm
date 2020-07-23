#include <iostream>
#include <algorithm>
using namespace std;

int	main(void)
{
	ios::sync_with_stdio(0);
    cin.tie(0);

	int	n;
	int	h;

	cin >> n >> h;

	int *up = new int [h];
	int *dw = new int [h];
	int	k;
	int	count;

	for (int i = 0; i < h; i++)
	{
		dw[i] = 0;
		up[i] = 0;
	}
	for (int i = 0; i < n/2; i++)
	{
		cin >> k;
		dw[k - 1]++;
		cin >> k;
		up[k - 1]++;
	}
	for (int i = h - 2; i >= 0; i--)
	{
		up[i] += up[i + 1];
		dw[i] += dw[i + 1];
	}
	for (int i = 0; i < h; i++)
		up[i] += dw[h - 1 - i];
	sort(up, up + h);
	count = 0;
	for (int i = 0; i < h; i++)
	{
		if (up[0] == up[i])
			count++;
		else
			break ;
	}
	cout << up[0] << ' ' << count;
}

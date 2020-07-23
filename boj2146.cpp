#include <queue>
#include <iostream>
using namespace std;

int		main(void)
{
	int	n, top = 0;
	queue<int> q;
	cin >> n;
	for (int i = 1; i <= n; i++)
		q.push(i);
	while (q.size() > 1)
	{
		q.pop();
		top = q.front();
		q.push(top);
		q.pop();
	}
	cout << q.front();
}

#include <iostream>
#include <string>
using namespace std;

int	q[2000005];
int	front = 0, back = 0;

void	push(int x)
{
	q[back] = x;
	back++;
}

void	pop()
{
	if (back - front == 0)
		cout << -1 << '\n';
	else
	{
		cout << q[front] << '\n';
		front++;
	}
}

void	print_size()
{
	cout << (back - front) << '\n';
}

void	print_is_empty()
{
	if ((back - front) == 0)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';
}

void	print_front()
{
	if ((back - front) == 0)
		cout << -1 << '\n';
	else
		cout << q[front] << '\n';
}

void	print_back()
{
	if ((back - front) == 0)
		cout << -1 << '\n';
	else
		cout << q[back - 1] << '\n';
}

void	read_order(string order)
{
	if (order == "pop")
		pop();
	else if (order == "size")
		print_size();
	else if (order == "empty")
		print_is_empty();
	else if (order == "front")
		print_front();
	else
		print_back();
}

int		main(void)
{
	ios::sync_with_stdio(0);
    cin.tie(0);

	int	N, x = 0;
	string s;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> x;
			push(x);
		}
		else
			read_order(s);
	}
}

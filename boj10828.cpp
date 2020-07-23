#include <iostream>
#include <algorithm>
using namespace std;

int	stac[10001];
int	pos = 0;

void		print_is_empty()
{
	if (pos == 0)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';
}

void		print_top()
{
	int top;

	if (pos == 0)
		cout << -1 << '\n';
	else
		cout << stac[pos - 1] << '\n';
}

void	push(int X)
{
	stac[pos] = X;
	pos++;
}

void		pop()
{
	if (pos == 0)
		cout << -1 << '\n';
	else
	{
		cout << stac[pos - 1] << '\n';
		pos--;
	}
}

void		print_size()
{
	cout << pos << '\n';
}

void	check_order(string order)
{
	if (order == "pop")
		pop();
	else if (order == "size")
		print_size();
	else if (order == "empty")
		print_is_empty();
	else
		print_top();
}

int		main(void)
{
	int		N;
	int		X;
	string	order = "";

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> order;
		if (order == "push")
		{
			cin >> X;
			push(X);
		}
		else
			check_order(order);
	}
	return (0);
}

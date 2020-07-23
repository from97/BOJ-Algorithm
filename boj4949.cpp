#include <iostream>
#include <string>
#include <stack>
#include <istream>
using namespace std;

stack<char> stck;

void	print_result(int is_balanced)
{
	if (is_balanced)
		cout << "yes\n";
	else
		cout << "no\n";
}

int		find_match(char c)
{
	if (stck.empty())
		return (0);
	if ((c == ')' && stck.top() == '(') ||
		(c == ']' && stck.top() == '['))
	{
		stck.pop();
		return (1);
	}
	return (0);
}

int		main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int flag;

	while (1)
	{
		string s;
		flag = 1;
		while (!stck.empty()) stck.pop();
		getline(cin, s);
		if (s == ".")
			break ;
		for (auto c : s)
		{
			if (c == '(' || c == '[')
				stck.push(c);
			else if (c == ')' || c == ']')
			{
				if (!find_match(c))
				{
					flag = 0;
					break ;
				}
			}
		}
		if (stck.empty() && flag)
			print_result(1);
		else
			print_result(0);
	}
}

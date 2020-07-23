#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	string msg;
	int hap = 0, sad = 0;

	getline(cin, msg);
	int len = msg.size();
	for (int i = 0; i < len - 2; i++)
	{
		if (msg[i] == ':' && msg[i + 1] == '-')
		{
			if (msg[i + 2] == ')') hap++;
			else if (msg[i + 2] == '(') sad++;
		}
	}
	if (hap == 0 && sad == 0) cout << "none";
	else if (hap == sad) cout << "unsure";
	else if (hap > sad) cout << "happy";
	else cout << "sad";
	cout << '\n' << hap << ' ' << sad;
}

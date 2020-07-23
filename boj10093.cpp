#include <bits/stdc++.h>
using namespace std;

void    swap(int *beg, int *end)
{
    int tmp = *beg;
    *beg = *end;
    *end = tmp;
}

int		main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    int beg, end;
    cin >> beg >> end;
    if (beg > end) swap(&beg, &end);
    if (beg == end) cout << 0;
    else
        cout << (end - beg - 1) << '\n';
    while (++beg < end)
        cout << beg << ' ';
}

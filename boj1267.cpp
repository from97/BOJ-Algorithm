#include <bits/stdc++.h>
using namespace std;

int		main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n, time_y, time_m;
    int y = 0, m = 0;
    cin >> n;
    while (n--)
    {
        cin >> time_y;
        time_m = time_y;
        while (time_y > -1)
        {
            y += 10;
            time_y -= 30;
        }
        while (time_m > -1)
        {
            m += 15;
            time_m -= 60;
        }
    }
    if (y == m) cout << "Y M " << y;
    else if (y > m) cout << "M " << m;
    else cout << "Y " << y;
}

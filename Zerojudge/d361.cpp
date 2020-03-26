/**
 *  @judge Zerojudge
 *  @id d361	
 *  @name Power et al.
 *  @contest
 * 
 *  @tag math
 */
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
typedef long long int ll;
using namespace std;

int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		if (a == "0" && b == "0")
		{
			break;
		}
		if (a == "0")
		{
			cout << 0 << endl;
			continue;
		}
		if (b == "0")
		{
			cout << 1 << endl;
			continue;
		}
		int m = a[a.length() - 1] - '0';
		int n = 0, count = 0;
		for (int i = b.length() - 1; i >= 0; i--)
		{
			n = n + pow(10, count) * (b[i] - '0');
			count++;
			if (count == 2)
			{
				break;
			}
		}
		if (n == 0)
		{
			n = 100;
		}
		n = (n - 1) % 4 + 1;
		int ans = int(pow(m, n)) % 10;
		cout << ans << endl;
	}
}
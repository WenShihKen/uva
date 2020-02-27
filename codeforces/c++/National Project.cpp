/*
    Author: Ken
    Problems: 1303B
*/
#include <iostream>
using namespace std;
typedef long long int LL;
LL n, g, b;

LL sol()
{
	if (n <= g)
		return n;
	LL temp = (n + 1) / 2;
	LL ans = (temp / g) * (g + b) + temp % g;
	if (temp % g == 0)
		ans -= (b + (temp % g));

	return max(ans, n); //why should work at least n days...
}

int main()
{
	LL t;
	cin >> t;
	while (t--)
	{
		cin >> n >> g >> b;
		cout << sol() << endl;
	}
}

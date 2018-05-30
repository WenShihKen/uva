#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int s, a, f;
		cin >> s >> a >> f;
		int x[50005], y[50005];
		for (int i = 0; i < f; i++)
			cin >> x[i] >> y[i];
		sort(x, x + f);
		sort(y, y + f);
		if (f % 2 == 0)
			printf("(Street: %d, Avenue: %d)\n", x[f / 2 - 1], y[f / 2 - 1]);
		else
			printf("(Street: %d, Avenue: %d)\n", x[f / 2], y[f / 2]);
	}
}
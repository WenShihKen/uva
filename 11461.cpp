#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int all[400] = {}, i;
	for (i = 1;; i++) {
		all[i] = i*i;
		if (i*i >= 100000)
			break;
	}
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0)
			break;
		int ans = 0;
		for (int j = 1; j <= i; j++) {
			if (a <= all[j] && all[j] <= b)
				ans++;
		}
		cout << ans << endl;
	}
}
#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
typedef long long int LL;

int main()
{
	LL ans[35] = {};
	ans[0] = 1, ans[1] = 2, ans[2] = 3;
	for (int i = 3; i <= 30; i++) {
		if (i % 2) {
			ans[i] = 2 * ans[i - 1] + ans[i - 2];
		}
		else {
			ans[i] = ans[i - 1] + ans[i - 2];
		}

	}

	int in1;
	while (cin >> in1) {
		if (in1 == -1)
			break;
		if (in1 % 2) {
			cout << "0\n";
		}
		else {
			cout << ans[in1] << endl;
		}
	}
}
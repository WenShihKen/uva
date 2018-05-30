#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

int all[100005] = {}, in1;

int count() {
	int start = 0, end = in1 - 1, c = 0;
	int sum1 = 0, sum2 = 0;
	while (start <= in1 - 1 || end >= 0) {
		if (sum1 > sum2) {
			sum2 += all[end--];
		}
		else if (sum1 < sum2) {
			sum1 += all[start++];
		}
		else {
			c++;
			sum1 += all[start++];
			sum2 += all[end--];
		}
	}
	return c;
}

int main()
{
	while (cin >> in1) {
		int ans = 0;
		fill(all, all + 100003, 0);
		for (int i = 0; i < in1; i++)
			cin >> all[i];
		ans = count();
		cout << ans << endl;
	}
}

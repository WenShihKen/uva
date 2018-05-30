#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

int t[100005] = {};

int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF) {
		fill(t, t + 100003, 0);
		for (int i = 0; i < in1; i++) {
			scanf("%d", &t[i]);
		}
		long long int sec = 0;
		sort(t, t + in1);
		while (in1 >= 4) {
			//t[1]+t[0]+t[in1-1]+t[in1-2]+t[1]
			//t[in1-1]+t[0]+t[0]+t[in1-2]+t[0]
			sec += min(t[1] + t[0] + t[in1 - 1] + t[1], t[in1 - 1] + t[0] + t[in1 - 2] + t[0]);
			in1 -= 2;
		}
		if (in1 == 3) {
			sec += (t[in1 - 1] + t[in1 - 2] + t[0]);
		}
		else if (in1 == 2) {
			sec += t[1];
		}
		else if (in1 == 1) {
			sec += t[0];
		}
		printf("%lld\n", sec);
	}
}

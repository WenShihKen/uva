#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int one[1000005] = {}, two[1000005] = {};

int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF) {
		int c1 = 0, c2 = 0;
		for (int i = 0; i < in1; i++) {
			int a = 0, b = 0;
			scanf("%d%d", &a, &b);
			if (a == 1) 
				one[c1++] = b;			
			else 
				two[c2++] = b;
		}
		sort(one, one + c1, cmp);
		sort(two, two + c2, cmp);
		int in2;
		scanf("%d", &in2);
		if (one[in2 - 1] > two[in2 - 1]) {
			printf("1 %d\n", one[in2 - 1] - two[in2 - 1]);
		}
		else {
			printf("2 %d\n", two[in2 - 1] - one[in2 - 1]);
		}
	}
}

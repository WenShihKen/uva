#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include<queue>
using namespace std;
typedef long long int LL;

bool cmp(LL a, LL b) {
	return a > b;
}

int main()
{
	LL t, count = 1;
	scanf("%lld", &t);
	while (t--) {
		LL in1, in2;
		priority_queue<LL>all;
		scanf("%lld%lld", &in1, &in2);
		LL number = in1;
		for (int i = 0; i < in1; i++) {
			LL temp;
			scanf("%lld", &temp);
			all.push(temp);
		}
		printf("Case %lld:\n", count++);
		for (int i = 0; i < in2; i++) {
			LL order;
			scanf("%lld", &order);
			if (order == 1) {
				LL temp;
				scanf("%lld", &temp);
				all.push(temp);
			}
			else {
				if (!all.empty()) {
					printf("Max: %lld\n", all.top());
					all.pop();
				}
				else {
					printf("It's empty!\n");
				}
			}
		}
		if (!all.empty()) {
			while (!all.empty()) {
				printf("%lld ", all.top());
				all.pop();
			}
		}
		else {
			printf("It's empty!");
		}
		printf("\n");
	}
}

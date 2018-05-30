#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
int snow[1000005] = {};
int main()
{
	int in1;
	scanf("%d", &in1);
	while (in1--) {
		int many, ans = 0, start = 1;
		map<int, int>check;
		fill(snow, snow + 1000003, 0);
		scanf("%d", &many);
		for (int i = 0; i < many; i++) {
			scanf("%d", &snow[i]);
			if (check[snow[i]]>=start) {
				start = check[snow[i]] + 1;
			}
			check[snow[i]] = i + 1;
			ans = (i - start + 1) > ans ? (i - start + 1) : ans;
		}
		cout << ans + 1 << endl;
	}
}

#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

int main()
{
	int in1;
	while (scanf("%d", &in1) != EOF) {
		int tree[20005] = {}, record[20005] = {};
		for (int i = 0; i < in1 - 1; i++) {
			int x, y;
			scanf("%d%d", &x, &y);
			if (tree[x]) {
				tree[x]++, tree[y]++;
				record[y] = x;
				while (x != record[x]) {
					tree[record[x]]++;
					x = record[x];
				}
			}
			else if (tree[y]) {//special
				record[x] = y;
				tree[x]++, tree[y]++;
				while (y != record[y]) {
					tree[record[y]]++;
					y = record[y];
				}
			}
			else {
				record[y] = x;
				tree[x] += 2, tree[y]++;
			}
		}
		for (int i = 1; i <= in1; i++) {
			printf("%5d-%5d\n", i, tree[i]);
		}
	}
}
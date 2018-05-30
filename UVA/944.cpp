#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
int all[100005] = {};
int main()
{
	for (int i = 1; i < 100000; i++) {
		map<int, bool>check;
		int round = 0, temp = i;
		while (temp != 1) {
			round++;
			int c = 0;
			while (temp) {
				c += ((temp % 10)*(temp % 10));
				temp /= 10;
			}
			temp = c;
			if (check[temp] == true)
				break;
			check[temp] = true;
		}
		if (temp == 1)
			all[i] = round + 1;
	}
	int l, h, next = 0;
	while (cin >> l >> h) {
		if(next)
			printf("\n");
		next = 1;
		for (int i = l; i <= h; i++) {
			if (all[i])
				printf("%d %d\n", i, all[i]);
		}
	}
}
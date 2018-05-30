#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main() {
	int k;
	bool check = 0;
	while (cin >> k) {
		if (check&&k)cout << endl;
		if (k == 0)break;
		int s[13];
		for (int i = 0; i < k; i++) {
			cin >> s[i];
		}
		sort(s, s + k);
		for (int t1 = 0; t1 < k; t1++) {
			for (int t2 = t1 + 1; t2 < k; t2++) {
				for (int t3 = t2 + 1; t3 < k; t3++) {
					for (int t4 = t3 + 1; t4 < k; t4++) {
						for (int t5 = t4 + 1; t5 < k; t5++) {
							for (int t6 = t5 + 1; t6 < k; t6++) {
								printf("%d %d %d %d %d %d\n", s[t1], s[t2], s[t3], s[t4], s[t5], s[t6]);
							}
						}
					}
				}
			}
		}
		check = 1;
	}
}

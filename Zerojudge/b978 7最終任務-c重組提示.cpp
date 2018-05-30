#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

struct b978 {
	char c;
	int n;
};

bool cmp(b978 a, b978 b) {
	return a.n < b.n;
}

int main()
{
	string in1;
	while (cin >> in1) {
		b978 *bbb = new b978[in1.length()];
		for (int i = 0; i < in1.length(); i++) {
			int x;
			scanf("%d", &x);
			bbb[i].c = in1[i], bbb[i].n = x;
		}
		sort(bbb, bbb + in1.length(), cmp);
		for (int i = 0; i < in1.length(); i++) {
			printf("%c", bbb[i].c);
		}
		printf("\n");
		delete bbb;
	}
}

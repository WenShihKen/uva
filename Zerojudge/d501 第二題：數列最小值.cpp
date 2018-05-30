#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
#include<map>
using namespace std;

typedef long long int LL;

int all[1000005] = {};

int main() {
	int in1;
	while (scanf("%d", &in1) != EOF) {
		for (int i = 0; i < in1; i++)
			scanf("%d", &all[i]);
		sort(all, all + in1);
		if (in1 % 2)
			printf("A=%d\n", all[in1 / 2]);
		else {
			printf("A=");
			for (int i = all[in1 / 2 - 1]; i <= all[in1 / 2]; i++) {
				printf("%d", i);
				if (all[in1 / 2] != i)
					printf("¡B");
			}
			printf("\n");
		}
	}
}
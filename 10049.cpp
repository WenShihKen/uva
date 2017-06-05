#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
using namespace std;

long long int all[1000000] = {};

int main()
{
	int count = 0;
	all[1] = 1, all[2] = 3;
	for (count = 3; all[count - 1] <= 2000000000; count++)
		all[count] = all[count - 1] + (lower_bound(all, all + count, count) - all);
	int in1;
	while (scanf("%d", &in1)) {
		if (in1 == 0)
			break;
		printf("%d\n", lower_bound(all, all + count, in1) - all);
	}
	return 0;
}
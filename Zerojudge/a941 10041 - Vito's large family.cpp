#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
	int time;
	scanf("%d", &time);
	while (time--) {
		int in1, house[30005] = {};
		scanf("%d", &in1);
		for (int i = 0; i < in1; i++) {
			int temp;
			scanf("%d", &temp);
			house[temp] += 1;
		}
		int house_number = 0;
		if (in1 % 2 == 1) {
			int count = 0;
			for (int i = 0; i <= 30000; i++) {
				count += house[i];
				if (count >= in1 / 2 + 1) {
					house_number = i;
					break;
				}
			}
		}
		else {
			int count = 0;
			for (int i = 0; i <= 30000; i++) {
				count += house[i];
				if (count >= in1 / 2) {
					house_number = i;
					break;
				}
			}
		}
		long long int length = 0;
		for (int i = 0; i <= 30000; i++) {
			if (house[i]) {
				length += (abs(i - house_number)*house[i]);
			}
		}
		printf("%lld %d\n", length, house_number);
	}
}

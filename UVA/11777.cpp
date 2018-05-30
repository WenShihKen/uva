#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int in1, c = 1;
	cin >> in1;
	while (in1--) {
		int temp[7] = {};
		for (int i = 0; i < 7; i++) {
			cin >> temp[i];
		}
		int sum = temp[0] + temp[1] + temp[2] + temp[3];
		sort(temp + 4, temp + 7);
		sum += ((temp[6] + temp[5]) / 2);
		if (sum >= 90) {
			printf("Case %d: A\n", c++);
		}
		else if (sum >= 80) {
			printf("Case %d: B\n", c++);
		}
		else if (sum >= 70) {
			printf("Case %d: C\n", c++);
		}
		else if (sum >= 60) {
			printf("Case %d: D\n", c++);
		}
		else {
			printf("Case %d: F\n", c++);
		}
		//printf("%d %d %d\n", temp[4], temp[5], temp[6]);
	}
}
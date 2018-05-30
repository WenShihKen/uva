#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
	int temp[10][10] = {};
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			temp[i][j] = pow(j, i);
	int t;
	scanf("%d", &t);
	while (t--) {
		int in1, digits = 0, ans = 0;
		bool check = false;
		scanf("%d", &in1);
		int t = in1;
		while (t)
			t /= 10, digits++;
		t = in1;
		while (t) {
			ans += temp[digits][t % 10];
			t /= 10;
		}
		if (ans == in1)
			printf("Armstrong\n");
		else
			printf("Not Armstrong\n");
	}
}
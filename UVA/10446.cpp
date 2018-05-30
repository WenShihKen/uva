#include<iostream>
#include<stdio.h>
using namespace std;

unsigned long long int t[65][65] = {};
long long int trib(int n, int back)
{
	if (n <= 1) return 1;
	if (t[n][back])
		return t[n][back];
	t[n][back] = 1;
	for (int i = 1; i <= back; i++) {
		t[n][back] += trib(n - i, back);
	}
	return t[n][back];
}
int main()
{
	int in1, in2, time = 1;
	while (cin >> in1 >> in2) {
		if (in1 > 60)
			break;
		printf("Case %d: ", time++);
		for (int i = 0; i < 64; i++)
			for (int j = 0; j < 64; j++)
				t[i][j] = 0;
		printf("%llu\n", trib(in1, in2));
	}
}
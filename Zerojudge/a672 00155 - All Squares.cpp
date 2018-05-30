#include<iostream>
#include<stdio.h>
using namespace std;

void count(int, int, int, int, int, int*);

int main()
{
	int square_size, x, y;
	while (cin >> square_size >> x >> y) {
		int out1 = 0;
		if (square_size == 0 && x == 0 && y == 0)
			break;
		count(1024, 1024, x, y, square_size, &out1);
		printf("%3d\n", out1);
	}
}

void count(int bigx, int bigy, int x, int y, int size, int*ans)
{
	if (size == 0)
		return;
	if (bigx - size <= x&&bigx + size >= x&&bigy - size <= y&&bigy + size >= y)
		(*ans)++;
	count(bigx + size, bigy + size, x, y, size / 2, ans);
	count(bigx + size, bigy - size, x, y, size / 2, ans);
	count(bigx - size, bigy + size, x, y, size / 2, ans);
	count(bigx - size, bigy - size, x, y, size / 2, ans);
}

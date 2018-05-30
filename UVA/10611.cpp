#include<iostream>
#include<stdio.h>
/*Binary search*/
using namespace std;
int finds = 0;
int temp[50005] = {}, query[25005] = {};
void search(int value, int start, int end)
{
	while (end - start > 0) {
		int t = (start + end) / 2;
		if (t == finds)
			return;
		finds = t;
		if (value == temp[finds])
			return;
		else if (value > temp[finds])
			start = finds;
		else
			end = finds;
		search(value, start, end);
		return;
	}
}
int main()
{
	fill(temp, temp + 50002, 0);
	fill(query, query + 25002, 0);

	int in1, count = 0, input_temp;
	cin >> in1;
	cin >> temp[count++];
	for (int i = 1; i < in1; i++) {
		cin >> input_temp;
		if (temp[count - 1] != input_temp) {
			temp[count++] = input_temp;
		}
	}
	int in2;
	cin >> in2;
	for (int i = 0; i < in2; i++)
		cin >> query[i];
	for (int i = 0; i < in2; i++) {
		finds = 0;
		search(query[i], 0, count);

		if (query[i] == temp[finds]) {
			if (finds - 1 >= 0)
				printf("%d ", temp[finds - 1]);
			else
				printf("X ");

			if (finds + 1 < in1)
				printf("%d\n", temp[finds + 1]);
			else
				printf("X\n");
		}
		else {
			if (query[i] > temp[finds])
				printf("%d ", temp[finds]);
			else if (finds - 1 >= 0)
				printf("%d ", temp[finds - 1]);
			else
				printf("X ");

			if (query[i] < temp[finds])
				printf("%d\n", temp[finds]);
			else if (finds + 1 < in1)
				printf("%d\n", temp[finds + 1]);
			else
				printf("X\n");
		}
	}
}
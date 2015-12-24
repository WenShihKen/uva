#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

int main()
{
	int times;
	scanf_s("%d", &times);
	while (times--) {
		string in1;
		cin >> in1;
		int len = in1.length(), start = 0, score = 0;
		while (start < len) {
			int check = 1;
			while (in1[start] == 'O') {
				score += check;
				start++, ++check;
			}
			start++;
		}
		printf("%d\n", score);
	}
	return 0;
}
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	string in1;
	int time = 1;
	while (getline(cin, in1)) {
		int c = 0, temp[15] = {};
		for (int i = 0; i < in1.length(); i++) {
			if (in1[i] == ' ') {
				c++;
			}
			else {
				temp[c] = temp[c] * 10 + in1[i] - '0';
			}
		}
		int min = 999999;
		for (int i = 0; i <= c; i++)
			if (min > temp[i])
				min = temp[i];
		min -= 5;
		int i = 0;
		for (i = min + 1; i <= 3600; i++) {
			bool check = true;
			for (int j = 0; j <= c; j++) {
				int d = i % (2 * temp[j]);
				if (d >= temp[j] - 5) {
					check = false;
				}
			}
			if (check) {
				printf("Set %d synchs again at %d minute(s) and %d second(s) after all turning green.\n", time++, i / 60, i % 60);
				break;
			}
		}
		if (i > 3600)
			printf("Set %d is unable to synch after one hour.\n", time++);
	}
}
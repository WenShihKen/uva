#include<iostream>
#include<stdio.h>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	int times;
	cin >> times;
	while (times--) {
		string in1;
		cin >> in1;
		unsigned int ans = 0;
		int temp1 = 0, temp2 = 0;
		temp1 = (in1[0] - 65) * 676 + (in1[1] - 65) * 26 + (in1[2] - 65);
		temp2 = (in1[4] - 48) * 1000 + (in1[5] - 48) * 100 + (in1[6] - 48) * 10 + (in1[7] - 48);
		ans = abs(temp1 - temp2);
		if (ans > 100) {
			printf("not nice\n");
		}
		else {
			printf("nice\n");
		}
	}
	return 0;
}
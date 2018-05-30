#include<iostream>
#include<string>
#include<stdio.h>
#define ans -99999999
using namespace std;
double find(int now, string in1)
{
	bool r = true;
	double temp = 0.0;
	now += 2;
	if (in1[now] == '-') {
		r = false;
		now++;
	}
	while (in1[now] != 'V' && in1[now] != 'A' && in1[now] != 'W') {
		if (in1[now] >= 48 && in1[now] <= 57) {
			temp = temp * 10 + double(in1[now] - '0');
			now++;
		}
		else if (in1[now] == '.') {
			double p = 10;
			now++;
			while (in1[now] >= 48 && in1[now] <= 57) {
				temp += ((in1[now] - '0') / p);
				p *= 10;
				now++;
			}
		}
		else {
			now++;
		}
	}
	if (in1[now - 1] == 'm')
		temp *= 0.001;
	else if (in1[now - 1] == 'k')
		temp *= 1000;
	else if (in1[now - 1] == 'M')
		temp *= 1000000;
	if (r == false)
		temp = 0 - temp;
	return temp;
}
int main()
{
	int line, Case = 1;
	cin >> line;
	getchar();
	while (line--) {
		string in1;
		getline(cin, in1);
		double P = ans, I = ans, U = ans;
		for (int i = 0; i < in1.length(); i++) {
			if (in1[i] == 'U'&&in1[i + 1] == '=') {
				U = find(i, in1);
			}
			else if (in1[i] == 'I'&&in1[i + 1] == '=') {
				I = find(i, in1);
			}
			else if (in1[i] == 'P'&&in1[i + 1] == '=') {
				P = find(i, in1);
			}
		}
		printf("Problem #%d\n", Case++);
		if (U != ans&&I != ans) {
			printf("P=%.2lfW\n\n", U*I);
		}
		else if (U != ans&&P != ans) {
			printf("I=%.2lfA\n\n", P / U);
		}
		else if (P != ans&&I != ans) {
			printf("U=%.2lfV\n\n", P / I);
		}
	}
}

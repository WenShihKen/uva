#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
string in[105], input[105];
char in1[105][105];
int ans = 0;
int line = 0;
bool temp[105][105] = {};

void rec(int x, int y)
{

	if (x < 0 || x >= line + 2 || y < 0 || y >= input[0].length() + 2 || in1[x][y] == 'L')
		return;
	if (temp[x][y] == true)
		return;
	if (in1[x][y] == 'W'&&temp[x][y] == false) {
		ans++;
	}

	temp[x][y] = true;
	rec(x + 1, y);
	rec(x - 1, y);
	rec(x, y + 1);
	rec(x, y - 1);
}

void init() {
	int len = input[0].length();
	ans = 0;
	for (int i = 0; i <= 103; i++) {
		for (int j = 0; j <= 103; j++) {
			in1[i][j] = 'L';
		}
	}
	for (int i = 0; i <= 103; i++) {
		for (int j = 0; j <= 103; j++) {
			temp[i][j] = false;
		}
	}
	for (int i = 1; i <= line; i++) {
		for (int j = 1; j <= len; j++) {
			if (input[i - 1][j - 1] == '1') {
				in1[i][j] = 'L';
			}
			else {
				in1[i][j] = 'W';
			}
		}
	}
}
int main()
{
	int t = 0;
	string num;
	getline(cin, num);
	for (int i = 0; i<num.length(); i++) {
		t = t * 10 + (num[i] - '0');
	}
	getline(cin, num);
	while (t--) {
		int x = 0, y = 0, count = 0;

		getline(cin, num);
		for (count = 0; num[count] != ' '; count++) {
			x = x * 10 + (num[count] - '0');
		}
		for (int i = count + 1; i<num.length(); i++) {
			y = y * 10 + (num[i] - '0');
		}
		line = 0;
		for (int i = 0; i < 104; i++)
			input[i] = "";
		while (getline(cin, input[line])) {
			if (input[line].length() == 0) {
				break;
			}
			else {
				line++;
			}
		}
		init();
		rec(x, y);
		printf("%d\n", ans);
		if (t > 0)
			printf("\n");
	}
}
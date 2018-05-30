#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
string in[105];
int ans = 0;
int line = 0;
bool temp[105][105] = {};
void rec(int x, int y)
{
	if (x < 0 || x >= line || y < 0 || y >= in[0].length() || in[x][y] == 'L')
		return;
	if (temp[x][y] == true)
		return;
	if (in[x][y] == 'W'&&temp[x][y] == false) {
		ans++;
	}
	//printf("%c %d %d\n",in[x][y], x, y);
	temp[x][y] = true;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			rec(x + i, y + j);
		}
	}
}
int main() {
	int t;
	scanf("%d", &t);
	getchar();
	getchar();
	while (t--) {
		for (int i = 0; i < 104; i++)
			in[i] = "";
		line = 0;
		while (getline(cin, in[line])) {
			if (in[line][0] >= '0'&&in[line][0] <= '9') {
				while (1) {

					ans = 0;
					for (int i = 0; i <= 103; i++)
						for (int j = 0; j <= 103; j++)
							temp[i][j] = false;

					int t1 = 0, t2 = 0, i = 0;
					for (i = 0; in[line][i] != ' '; i++) {
						t1 = t1 * 10 + (in[line][i] - 48);
					}
					for (int j = i + 1; j<in[line].length(); j++) {
						t2 = t2 * 10 + (in[line][j] - 48);
					}
					rec(t1 - 1, t2 - 1);
					printf("%d\n", ans);
					getline(cin, in[line]);
					if (in[line].length() == 0)
						break;
				}
			}
			if (in[line].length() == 0)
				break;
			line++;
		}
		if(t>0)
			printf("\n");
	}
}
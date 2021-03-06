#include<iostream>
#include<string>
using namespace std;
int all[105][105], step;
int r, c;
int rec(int i, int j, int len)
{
	int up = 0, down = 0, right = 0, left = 0;
	if (i - 1 >= 1 && all[i - 1][j] < all[i][j]) {//左
		left = rec(i - 1, j, len + 1);
	}
	if (i + 1 <= r && all[i + 1][j] < all[i][j]) {//右
		right = rec(i + 1, j, len + 1);
	}
	if (j - 1 >= 1 && all[i][j - 1] < all[i][j]) {//上
		up = rec(i, j - 1, len + 1);
	}
	if (j + 1 <= c && all[i][j + 1] < all[i][j]) {//下
		down = rec(i, j + 1, len + 1);
	}
	if (left || right || up || down) {
		left = left > right ? left : right;
		left = left > up ? left : up;
		left = left > down ? left : down;
		return left;
	}
	else {
		return len;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string name;
		cin >> name >> r >> c;
		for (int i = 0; i < 103; i++)
			for (int j = 0; j < 103; j++)
				all[i][j] = 0;
		for (int i = 1; i <= r; i++)
			for (int j = 1; j <= c; j++)
				cin >> all[i][j];
		step = 0;
		for (int i = 1; i <= r; i++) {
			for (int j = 1; j <= c; j++) {
				int temp = rec(i, j, 1);
				step = step > temp ? step : temp;
			}
		}
		cout << name << ": " << step << endl;
	}
	return 0;
}

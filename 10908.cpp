#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	int time;
	cin >> time;
	while (time--) {
		int M, N, Q;
		cin >> M >> N >> Q;
		string in1[105];
		for (int i = 0; i < M; i++)
			cin >> in1[i];
		printf("%d %d %d\n", M, N, Q);
		while (Q--) {
			int x, y, max = 1, big = 1;
			cin >> x >> y;
			char t = in1[x][y];
			while (1) {
				bool same = true;
				if (!(x - big >= 0 && x + big < M&&y - big >= 0 && y + big < N))
					break;
				if (x - big >= 0 && x + big < M&&y - big >= 0 && y + big < N) {
					for (int i = x - big; i <= x + big; i++) {
						for (int j = y - big; j <= y + big; j++) {
							if (in1[i][j] != t) {
								same = false;
							}
						}
					}
				}
				big++;
				if (same==true)
					max += 2;
			}
			cout << max << endl;
		}
	}
	return 0;
}
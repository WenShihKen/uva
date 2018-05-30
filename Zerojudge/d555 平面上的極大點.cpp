#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<vector>
#include<sstream>

using namespace std;

struct point{
	int x, y;
}p[500000];

bool compare(point a, point b) {
	return a.y > b.y || (a.y == b.y&&a.x > b.x);
}

int main()
{
	int in1, c = 1;
	while (cin >> in1) {
		for (int i = 0; i < in1; i++) {
			p[i].x = 0, p[i].y = 0;
			cin >> p[i].x >> p[i].y;
		}
		sort(p, p + in1, compare);

		vector<int>answer;
		int temp_x = -1000000, temp_y = 99999999;
		for (int i = 0; i < in1; i++) {
			if ((temp_x < p[i].x&&temp_y != p[i].y)) {
				answer.push_back(i);
				temp_x = p[i].x, temp_y = p[i].y;
			}
		}
		printf("Case %d:\n", c++);
		printf("Dominate Point: %d\n", answer.size());
		for (int i = 0; i != answer.size(); i++) {
			printf("(%d,%d)\n", p[answer[i]].x, p[answer[i]].y);
		}
		
	}
}

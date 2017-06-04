#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
	int count = 1;
	string in1;
	while (getline(cin, in1)) {
		if (in1 == "END")
			break;
		double x = 0.0, y = 0.0;
		int dis = 0;
		string dir = "";
		for (int i = 0; i != in1.length(); i++) {
			if (in1[i] >= '0'&&in1[i] <= '9')
				dis = dis * 10 + in1[i] - '0';
			else if (in1[i] >= 'A'&&in1[i] <= 'Z')
				dir += in1[i];
			else if (in1[i] == ',' || in1[i] == '.') {
				if (dir == "N") {
					y += dis;
				}
				else if (dir == "E") {
					x += dis;
				}
				else if (dir == "W") {
					x -= dis;
				}
				else if (dir == "S") {
					y -= dis;
				}
				else if (dir == "NE") {
					x += dis*sqrt(2) / 2;
					y += dis*sqrt(2) / 2;
				}
				else if (dir == "SE") {
					x += dis*sqrt(2) / 2;
					y -= dis*sqrt(2) / 2;
				}
				else if (dir == "SW") {
					x -= dis*sqrt(2) / 2;
					y -= dis*sqrt(2) / 2;
				}
				else if (dir == "NW") {
					x -= dis*sqrt(2)/2;
					y += dis*sqrt(2) / 2;
				}
				dis = 0;
				dir = "";
			}
		}
		printf("Map #%d\n", count++);
		printf("The treasure is located at (%.3lf,%.3lf).\n", x, y);
		printf("The distance to the treasure is %.3lf.\n", sqrt(x*x + y*y));
		printf("\n");
	}
}
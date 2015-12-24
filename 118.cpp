#include<iostream>
#include<string>

using namespace std;

int main()
{
	int x, y, robot_x, robot_y;
	int check[100][100];
	cin >> x >> y;
	string face;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			check[i][j] = 0;
		}
	}
	while (cin >> robot_x >> robot_y >> face) {
		string operate;
		cin >> operate;
		bool flag = true;
		for (int i = 0; i < operate.length(); ++i) {
			bool OutOfRange = true;
			switch (face[0]) {
			case 'N':
				switch (operate[i]) {
				case 'L':
					face[0] = 'W';
					break;
				case 'R':
					face[0] = 'E';
					break;
				case 'F':
					if (y < (robot_y + 1)) {
						OutOfRange = false;
					}
					else {
						robot_y += 1;
					}
					break;
				}
				break;
			case 'S':
				switch (operate[i]) {
				case 'L':
					face[0] = 'E';
					break;
				case 'R':
					face[0] = 'W';
					break;
				case 'F':
					if (0 > (robot_y - 1)) {
						OutOfRange = false;
					}
					else {
						robot_y -= 1;
					}
					break;
				}
				break;
			case 'E':
				switch (operate[i]) {
				case 'L':
					face[0] = 'N';
					break;
				case 'R':
					face[0] = 'S';
					break;
				case 'F':
					if (x < (robot_x + 1)) {
						OutOfRange = false;
					}
					else {
						robot_x += 1;
					}
					break;
				}
				break;
			case 'W':
				switch (operate[i]) {
				case 'L':
					face[0] = 'S';
					break;
				case 'R':
					face[0] = 'N';
					break;
				case 'F':
					if (0 > (robot_x - 1)) {
						OutOfRange = false;
					}
					else {
						robot_x -= 1;
					}
					break;
				}
				break;
			}
			//cout << robot_x << " " << robot_y << " " << face << " " << check[robot_x][robot_y] << endl;
			if (OutOfRange == false && check[robot_x][robot_y] == 0) {
				check[robot_x][robot_y] = 1;
				flag = false;
				break;
			}
			else if (OutOfRange == false && check[robot_x][robot_y] == 1) {
				flag = true;
			}
		}
		if (flag == true) {
			cout << robot_x << " " << robot_y << " " << face << endl;
		}
		else {
			cout << robot_x << " " << robot_y << " " << face << " " << "LOST" << endl;
		}
	}
	return 0;
}
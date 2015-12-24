#include<iostream>

using namespace std;

int main()
{
	int area;
	while (cin >> area) {
		if (area == 0)
			break;
		bool flag = false;
		for (int check = 1; check < area; check++) {
			int now = 1, cut = area;
			bool power[100];
			for (int i = 0; i < 100; i++)
				power[i] = true;
			power[1] = false;
			while (1) {
				int step = 0;
				for (;;) {
					now += 1;
					if (now > area) {
						now = 1;
					}
					if (power[now] == true) {
						++step;
					}
					if (step == check) {
						break;
					}
				}
				//cout << now << " ";
				power[now] = false;
				--cut;
				if (cut == 1) {
					flag = true;
					break;
				}else if(now == 13) {
					//cout << endl;
					break;
				}
			}
			if (flag) {
				cout << check << endl;
				break;
			}
		}
	}
	return 0;
}
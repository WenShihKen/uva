#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

struct mycar{
	string brand;
	string color;
};

int main() {
	int car, instruction;
	while (cin >> car >> instruction) {
		vector<mycar>temp;
		for (int i = 0; i < car; i++) {
			mycar temp_car;
			cin >> temp_car.brand >> temp_car.color;
			temp.push_back(temp_car);
		}
		for (int i = 0; i < instruction; i++) {
			string in1, in2;
			cin >> in1 >> in2;
			if (in1 == "brand") {
				for (int j = 0; j != temp.size(); j++) {
					if (temp[j].brand == in2) {
						cout << temp[j].brand << " " << temp[j].color << endl;
					}
				}
			}
			else {
				for (int j = 0; j != temp.size(); j++) {
					if (temp[j].color == in2) {
						cout << temp[j].brand << " " << temp[j].color << endl;
					}
				}
			}
		}
		cout << endl;
	}
}

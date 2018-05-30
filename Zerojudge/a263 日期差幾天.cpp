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

int years_day[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };

int calday(int year, int month, int day);


int main()
{
	int year[2], month[2], day[2];
	while (cin >> year[0] >> month[0] >> day[0]) {
		cin >> year[1] >> month[1] >> day[1];
		cout << abs(calday(year[0], month[0], day[0]) - calday(year[1], month[1], day[1])) << endl;
	}
}

int calday(int year, int month, int day) {
	int leap_days = 0;
	bool is_leap;
	is_leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
	year -= 1;
	leap_days = year / 4 - year / 100 + year / 400;

	return year * 365 + leap_days + (years_day[month - 1]) + day + (month > 2 ? is_leap : 0);
}

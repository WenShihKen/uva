#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
	string step;
	while (cin >> step) {
		if (step[0] == '#')
			break;
		string tel;
		int start_hr, start_min, end_hr, end_min;
		int day = 0, evening = 0, night = 0;
		double price[5][3] = {
			{0.10,0.06,0.02},{0.25,0.15,0.05},{0.53,0.33,0.13},{0.87,0.47,0.17},
			{1.44,0.80,0.30}
		};
		double sum = 0.0;
		cin >> tel >> start_hr >> start_min >> end_hr >> end_min;
		if (end_hr < start_hr || (end_hr == start_hr && end_min <= start_min)) {
			end_hr += 24;
		}
		int sum_start = 60 * start_hr + start_min, sum_end = end_hr * 60 + end_min;

		for (int i = 0; i < 2880; i++) {
			if (i > sum_start&&i <= sum_end) {
				if (i <= 480) {
					night++;
				}
				else if (i <= 1080) {
					day++;
				}
				else if (i <= 1320) {
					evening++;
				}
				else if (i <= 1920) {
					night++;
				}
				else if (i <= 2520) {
					day++;
				}
				else if (i<=2760) {
					evening++;
				}
				else if (i <= 3360) {
					night++;
				}
			}
		}
		sum = price[step[0] - 65][0] * day + price[step[0] - 65][1] * evening + price[step[0] - 65][2] * night;
		cout << "  " << tel;
		printf("%6d%6d%6d", day, evening, night);
		cout << "  " << step;
		printf("%8.2f\n", sum);
	}
	return 0;
}

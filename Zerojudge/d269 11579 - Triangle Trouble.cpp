#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int in1, find = 0;
		double all[10005] = {}, area = 0.0;
		cin >> in1;
		for (int i = 0; i < in1; i++)
			cin >> all[i];
		sort(all, all + in1);
		for (int i = in1 - 1; i >= 2; i--) {
			for (int j = i - 1; j >= 1; j--) {
				for (int k = j - 1; k >= 0; k--) {
					if (all[i] < all[j] + all[k]) {
						double s = (all[i] + all[j] + all[k]) / 2;
						area = sqrt(s*(s - all[i])*(s - all[j])*(s - all[k]));
						find = 1;
					}
					if (find)
						break;
				}
				if (find)
					break;
			}
			if (find)
				break;
		}
		printf("%.2lf\n", area);
	}
	return 0;
}

#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int temp[26] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97 };
	int n;
	while (cin >> n) {
		if (n == 0)
			break;
		printf("%3d! =", n);
		int count[100];
		for (int i = 0; i < 100; i++)
			count[i] = 0;
		for (int i = 2; i <= n; i++) {
			int t = i;
			while (t != 1) {
				for (int j = 0; j < 26; j++) {
					if (t%temp[j] != 0) {
						continue;
					}
					else {
						t /= temp[j];
						++count[temp[j]];
						/*cout << t << " " << endl;*/
						break;
					}
				}
			}
		}
		int next = 0;
		for (int i = 0; i < 100; i++) {
			if (count[i]) {			
				next++;
			}
		}
		int check = 0;
		for (int i = 0; i < 100; i++) {
			if (count[i]) {
				printf("%3d", count[i]);
				check++;
			}
			if (check == 15 && next == 15) {
				break;
			}
			else if (check == 15) {
				check = 0;
				printf("\n      ");
			}
		}
		printf("\n");
		
	}
	return 0;
}

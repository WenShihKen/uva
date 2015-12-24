#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int round = 1, number;
	while (cin >> number) {
		if (number == 0)
			break;
		printf("Game %d:\n", round++);
		int author[1005];
		fill(author, author + 1003, 0);
		for (int i = 0; i < number; i++)
			cin >> author[i];
		while (1) {
			int challenger[1005], temp_a[15], temp_b[15], A = 0, B = 0;
			bool end = false;
			fill(temp_a, temp_a + 13, 0);
			fill(temp_b, temp_b + 13, 0);
			fill(challenger, challenger + 1003, 0);
			for (int i = 0; i < number; i++)
				cin >> challenger[i];
			for (int i = 0; i < number; i++) {
				if (challenger[i] == 0) {
					end = true;
					break;
				}

			}
			if (end)
				break;
			for (int i = 0; i < number; i++) {
				if (author[i] == challenger[i]) {
					A++;
				}
				else {
					temp_a[author[i]]++;
					temp_b[challenger[i]]++;
				}
			}
			for (int i = 1; i < 10; i++) {
				if (temp_a[i] && temp_b[i]) {
					if (temp_a[i] <= temp_b[i])
						B += temp_a[i];
					else
						B += temp_b[i];
				}
			}
			printf("    (%d,%d)\n", A, B);
		}
	}
	return 0;
}
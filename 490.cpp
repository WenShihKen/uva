#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
	string all[105];
	int temp[105] = {}, count = 0, max = 0;
	while (getline(cin, all[count])) {
		if (all[count] == "0")
			break;
		temp[count] = all[count].length();
		max = max > all[count].length() ? max : all[count].length();
		count++;
	}
	for (int i = 0; i < max; i++) {
		for (int j = count - 1; j >= 0; j--) {
			if (temp[j] <= i) {
				printf(" ");
			}
			else {
				cout << all[j][i];
			}
		}
		cout << endl;
	}
}
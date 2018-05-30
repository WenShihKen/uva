#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main()
{
	int time;
	cin >> time;
	getchar();
	while (time--) {
		string s;
		int a[130] = { 0 }, len = 0, i, max = 1;
		getline(cin, s);
		len = s.length();
		for (i = 0; s[i]; i++) {
			if (s[i] >= 65 && s[i] <= 90) {
				s[i] += 32;
			}
			if (s[i] >= 97 && s[i] <= 122) {
				a[s[i]]++;
			}
			else {
				continue;
			}
			if (a[s[i]] > max) {
				max = a[s[i]];
			}
		}
		for (i = 97; i <= 122; i++) {
			if (max == a[i]) {
				printf("%c", i);
			}
		}
		printf("\n");
	}
	return 0;
}


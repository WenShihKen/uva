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

string in1;
int t[10000] = { 0 };
int main()
{
	int next = 0, count = 0;
	while (getline(cin, in1)) {
		if (in1[0] == '_') {
			if (next) {
				for (int c = 0; c < count; c++) {
					printf("%c", t[c]);
				}
				printf("\n");
				next = 0;
				count = 0;
			}
			else {
				next++;
			}
		}
		else {
			int i, len = in1.length(), out1 = 0;
			for (i = 0; i < len; i++) {
				switch (in1[i]) {
				case'|':break;
				case'.':break;
				case'o':out1 *= 2, out1 += 1; break;
				case' ':out1 *= 2; break;
				}
			}
			t[count] = out1;
			count++;
		}
	}
	return 0;
}
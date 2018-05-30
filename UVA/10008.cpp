#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	int line;
	while (scanf("%d\n", &line) != EOF) {
		int temp[200] = {}, max = 0;
		for (int i = 0; i < line; i++) {
			string in1;
			getline(cin, in1);
			for (int j = 0; j < in1.length(); j++) {
				if ((in1[j] >= 65 && in1[j] <= 90)) {
					++temp[in1[j]];
					max = temp[in1[j]]>max ? temp[in1[j]] : max;
				}
				else if ((in1[j] >= 97 && in1[j] <= 122)) {
					++temp[in1[j] - 32];
					max = temp[in1[j] - 32]>max ? temp[in1[j] - 32] : max;
				}
			}
		}
		while (max > 0) {
			for (int i = 65; i <= 90; i++) {
				if (temp[i] == max)
					printf("%c %d\n", i, max);
			}
			--max;
		}
	}
	return 0;
}
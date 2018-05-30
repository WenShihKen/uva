#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include<vector>
#include<map>
using namespace std;

int main()
{
	string in1;
	while (getline(cin, in1)) {
		int temp[26] = {}, len = in1.length();
		for (int i = 0; i < in1.length(); i++) {
			if (in1[i] >= 'a'&&in1[i] <= 'z')
				temp[in1[i] - 'a']++;
			else if (in1[i] >= 'A'&&in1[i] <= 'Z')
				temp[in1[i] - 'A']++;
			else
				len--;
		}
		for (int i = 0; i < 26; i++)
			printf("%d ", temp[i]);
		printf("\n");
		for (int i = 0; i < 26; i++)
			printf("%.2lf ", (temp[i] / double(len) * 100));
		printf("\n");
	}
}

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF) {
		string temp;
		while (n--)
			temp += 'L';
		while (m--)
			temp += 'S';
		do {
			for (int i = 0; i != temp.length(); i++) {
				if (temp[i] == 'L')
					printf("S");
				else
					printf("L");
			}
			printf("\n");
		} while (next_permutation(temp.begin(), temp.end()));
		cout << endl;
	}
}

#include<iostream>
#include<map>
#include<stdio.h>

using namespace std;

int main()
{
	int Z, I, M, L, test = 1;
	while (cin >> Z >> I >> M >> L) {
		if (Z == 0 && I == 0 && M == 0 && L == 0)
			break;
		map<int, int> record;
		int round = 1, temp = L;
		while (!record[L]) {
			record[L] = round;
			L = (Z*L + I) % M;
			round++;
		}
		if (temp == L) {
			round -= 1;
		}
		else {
			round = round - record[L];
		}
		printf("Case %d: %d\n", test++, round);
	}
	return 0;
}

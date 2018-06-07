#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<queue>
#include<map>

using namespace std;

struct UR_Nat {
	
	double God_Nat[1000005] = {};
	int Tojo_Nozomi[1000005] = {};
};
UR_Nat UR;
int main()
{

	UR.God_Nat[0] = 1.0;
	UR.Tojo_Nozomi[0] = 0;
	for (int Loveca = 1; Loveca <= 1000000; Loveca++) {
		UR.God_Nat[Loveca] = UR.God_Nat[Loveca - 1] / 2;
		UR.Tojo_Nozomi[Loveca] = UR.Tojo_Nozomi[Loveca - 1];
		if (UR.God_Nat[Loveca] < 1.0) {
			UR.God_Nat[Loveca] *= 10;
			UR.Tojo_Nozomi[Loveca] -= 1;
		}
	}
	int NATYEE;
	while (cin >> NATYEE) {
		printf("2^-%d = %.3lfe%d\n", NATYEE, UR.God_Nat[NATYEE], UR.Tojo_Nozomi[NATYEE]);
	}
}

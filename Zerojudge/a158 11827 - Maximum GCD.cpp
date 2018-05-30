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

int GCD(int a, int b) {
	if (b == 0) return a;
	GCD(b, a%b);
}

int main()
{
	int in1, t_gcd;
	cin >> in1;
	getchar();
	for (int i = 0; i < in1; i++) {
		string temp;
		vector<int>gcd_num;
		getline(cin, temp);
		stringstream s(temp);
		while (s >> t_gcd) {
			gcd_num.push_back(t_gcd);
		}
		int max = 0;
		for (int i = 0; i != gcd_num.size(); i++) {
			for (int j = i + 1; j != gcd_num.size(); j++)
			{
				max = max < GCD(gcd_num[i], gcd_num[j]) ? GCD(gcd_num[i], gcd_num[j]) : max;
			}
		}
		printf("%d\n", max);
	}
}

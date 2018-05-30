#include<stdio.h>
#include<iostream>
using namespace std;

typedef unsigned long long ULL;

int main()
{
	ULL in1, t;
	cin >> t;
	while (t--) {
		cin >> in1;
		ULL five = 0, t[4] = { 6,8,4,2 }, m = 1, in1_temp = in1;
		if (in1 < 5) {
			ULL temp = 1;
			for (int i = 1; i <= in1; i++)
				temp *= i;
			while (temp % 10 == 0) {
				temp /= 10;
			}
			cout << temp % 10 << endl;
			continue;
		}
		for (int i = 1; i <= in1 % 10; i++)
		{
			if (i % 5) 
				m = (m*i) % 10;
		}
		while (in1_temp >= 5)
		{
			in1_temp = in1_temp / 5;
			for (int i = 1; i <= in1_temp % 10; i++)
			{
				if (i % 5) 
					m = (m*i) % 10;
			}
			five = (five + in1_temp) % 4;
		}
		cout << t[five] * m % 10 << endl;
	}
	return 0;
}

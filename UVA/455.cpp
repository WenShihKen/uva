#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string in1;
		cin >> in1;
		int round = 0, min = 99999;
		for (int i = 1; i <= in1.length(); i++) {
			int count = 0, flag = 0;
			if (in1.length() % i != 0)
				continue;
			string temp;
			while (count < i) {
				temp += in1[count];
				count++;
			}
			for (int j = 0; j < in1.length(); j += i) {
				int t = 0;
				for (int k = 0; k < count; k++) {
					if (temp[k] == in1[j + k]) 
						t++;					
					else 
						break;				
				}
				if (count == t)
					flag++;
			}
			if (flag == in1.length() / i) {
				if (i < min) {
					min = i;
					round = min;
				}
			}
		}
		if (t) {
			printf("%d\n\n", round);
		}
		else {
			printf("%d\n", round);
		}
	}
}
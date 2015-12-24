#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	int in1, in2;
	while (cin >> in1 >> in2) {
		if (in1 == 0 && in2 == 0)
			break;
		string temp;
		int check[1010] = {};
		fill(check, check + 1005, -1);
		temp = ".";
		check[in1] = 0;
		while (in1) {
			in1 *= 10;
			temp += (in1 / in2) + '0';
			in1 %= in2;
			if (check[in1%in2] != -1)
				break;
			check[in1] = temp.length() - 1;
		}
		for (int i = 0; i < temp.length(); i++) {
			if (i && !(i % 50))
				cout << endl;
			cout << temp[i];
		}
		cout << endl;
		if (in1)
			printf("The last %d digits repeat forever.\n\n", temp.length() - check[in1%in2] - 1);
		else
			printf("This expansion terminates.\n\n");
	}
}
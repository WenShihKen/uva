#include<iostream>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
#include<sstream>
#include<vector>
#include<map>
using namespace std;

typedef long long int LL;

int main() {
	int in1;
	cin >> in1;
	while (in1--) {
		int len, instruction;
		cin >> len >> instruction;
		if (instruction == 1) {
			for (int i = 1; i <= len; i++) {
				for (int j = 1; j <= len; j++) {
					if (i +j==len+1) {
						printf("*");
					}
					else {
						printf("x");
					}
					if (j < len)
						printf(" ");
				}
				cout << endl;
			}
			//cout << endl;
		}
		else if (instruction == 2) {
			for (int i = 1; i <= len; i++) {
				for (int j = 1; j <= len; j++) {
					if (i == j) {
						printf("*");
					}
					else {
						printf("x");
					}
					if (j < len)
						printf(" ");
				}
				cout << endl;
			}
			//cout << endl;
		}
		else if (instruction == 3) {
			for (int i = 1; i <= len; i++) {
				for (int j = 1; j <= len; j++) {
					if (j == len) {
						printf("*");
					}
					else {
						printf("x");
					}
					if (j < len)
						printf(" ");
				}
				cout << endl;
			}
		//	cout << endl;
		}
		else if (instruction == 4) {
			for (int i = 1; i <= len; i++) {
				for (int j = 1; j <= len; j++) {
					if (j == 1) {
						printf("*");
					}
					else {
						printf("x");
					}
					if (j < len)
						printf(" ");

				}
				cout << endl;
			}
		
		}
		if (in1 == 0)
			cout << endl;
	}
}
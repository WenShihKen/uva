#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
	string in1;
	int count = 0;
	while (getline(cin, in1)) {
		for (unsigned int i = 0; i < in1.length(); i++) {
			if (in1[i] == '"') {
				if (count % 2 == 0) {
					++count;
					printf("``");
				}
				else {
					++count;
					printf("''");
				}
			}
			else {
				cout << in1[i];
			}
		}
		cout << endl;
	}
}
#include<iostream>
#include<stdio.h>
#include<string>
#include<stack>
using namespace std;
int main() {
	string in1;
	while (getline(cin, in1)) {
		if (in1 == "0")
			break;
		int check = 1;
		for (int i = 0; i < 32; i++) {
			stack<int>temp;
			for (int j = in1.length() - 1; j >= 0; j--) {
				if (in1[j] == 'p'|| in1[j] == 'q'|| in1[j] == 'r'|| in1[j] == 's'|| in1[j] == 't') {
					int t = (i >> (in1[j] - 'p')) & 1;
					temp.push(t);
				}
				else {
					int temp1, temp2;
					temp1 = temp.top();
					temp.pop();
					if (in1[j] != 'N') {
						temp2 = temp.top();
						temp.pop();
					}
					/////////////////////////////////////
					if (in1[j] == 'K') {
						temp.push(temp1&temp2);
					}
					else if (in1[j] == 'A') {
						temp.push(temp1|temp2);
					}
					else if (in1[j] == 'N') {
						temp.push(!temp1);
					}
					else if (in1[j] == 'C') {
						temp.push(!(temp1&(!temp2)));
					}
					else if (in1[j] == 'E') {
						temp.push(temp1 == temp2);
					}
				}
			}
			check = check&temp.top();
		}
		if (check) {
			printf("tautology\n");
		}
		else {
			printf("not\n");
		}
	}
}
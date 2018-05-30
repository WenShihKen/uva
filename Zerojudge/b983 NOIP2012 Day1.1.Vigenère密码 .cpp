#include <iostream>
#include <cmath>
#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

int main()
{
	string key, encrypt;
	while (getline(cin, key)) {
		getline(cin, encrypt);
		bool check[1005] = {};
		int t[1005] = {}, ty[1005] = {};
		for (int i = 0; i < key.length(); i++) {
			if (key[i] >= 'A'&&key[i] <= 'Z') {
				ty[i] = key[i] - 'A';
			}
			else {
				ty[i] = key[i] - 'a';
			}
		}
		for (int i = 0; i < encrypt.length(); i++) {
			if (encrypt[i] >= 'A'&&encrypt[i] <= 'Z') {
				check[i] = true;
				t[i] = encrypt[i] - 'A';
			}
			else {
				check[i] = false;
				t[i] = encrypt[i] - 'a';
			}
		}
		for (int i = 0, j = 0; i < encrypt.length(); i++, j++, j %= (key.length())) {
			t[i] -= ty[j];
			if (t[i] < 0)
				t[i] += 26;
			t[i] %= 26;
		}
		for (int i = 0; i < encrypt.length(); i++) {
			if (check[i]) {
				printf("%c", t[i] + 'A');
			}
			else {
				printf("%c", t[i] + 'a');
			}
		}
		printf("\n");
	}
}
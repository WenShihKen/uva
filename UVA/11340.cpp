#include<iostream>
#include<map>
#include<iomanip>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int many, price, ave = 0;
		char c;
		map<char, int>word;
		cin >> many;
		for (int i = 0; i < many; i++) {
			cin >> c >> price;
			word[c] = price;
		}
		int line;
		string sentence;
		scanf("%d\n", &line);
		for (int i = 0; i < line; i++) {
			getline(cin, sentence);
			for (int j = 0; j < sentence.length(); j++) {
				if (word[sentence[j]]>0) {
					ave += word[sentence[j]];
				}
			}
		}
		cout << fixed << setprecision(2) << ave / 100.0 << "$" << endl;
	}
}
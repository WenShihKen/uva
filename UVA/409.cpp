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

string transform(string in1) {
	for (int j = 0; j < in1.length(); j++) {
		in1[j] = tolower(in1[j]);
	}
	return in1;
}

int main()
{
	int in1, in2, count = 1;
	while (cin >> in1 >> in2) {
		getchar();
		string word, excuse;
		vector<string>temp, ans;
		for (int i = 0; i < in1; i++) {
			getline(cin, word);
			word = transform(word);
			temp.push_back(word);
		}
		int word_count[23] = {};
		for (int i = 0; i < in2; i++) {
			getline(cin, excuse);
			ans.push_back(excuse);
			vector<string>divide;
			excuse = transform(excuse);
			for (int j = 0; j < excuse.length(); j++) {
				if (excuse[j] >= 'a'&&excuse[j] <= 'z') {
					string t;
					while (j < excuse.length() && (excuse[j] >= 'a'&&excuse[j] <= 'z')) {
						t += excuse[j];
						j++;
					}
					for (int k = 0; k < temp.size(); k++) {
						if (t == temp[k]) {
							word_count[i] += 1;
						}
					}
				}
			}
		}
		printf("Excuse Set #%d\n", count++);
		int check_max = 0;
		for (int i = 0; i < in2; i++) {
			if (check_max < word_count[i]) {
				check_max = word_count[i];
			}
		}
		for (int i = 0; i < in2; i++) {
			if (check_max == word_count[i]) {
				cout << ans[i] << endl;
			}
		}
		cout << endl;
	}
}
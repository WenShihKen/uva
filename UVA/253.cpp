#include<iostream>
#include<string>
using namespace std;
int main()
{
	string in1;
	while (cin >> in1) {
		string str1, str2;
		int check = 0;
		for (int i = 0; i < 6; i++) {
			str1 += in1[i];
			str2 += in1[6 + i];
		}
		for (int i = 0; i < 3; i++) {
			check = 0;
			for (int j = 0; j < 3; j++) {
				if ((str1[i] == str2[j] && str1[5 - i] == str2[5 - j]) || (str1[5 - i]) == str2[j] && str1[i] == str2[5 - j]) {
					check = 1;
					str2[j] = '0', str2[5 - j] = '0';
					break;
				}
			}
			if (!check) break;
		}
		if (check)
			cout << "TRUE" << endl;
		else
			cout << "FALSE" << endl;
	}
	return 0;
}
#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	string in1;
	map<string, bool>record;
	while (getline(cin, in1)) {
		bool flag = false;
		map<string, bool>::iterator i;
		for (i = record.begin(); i != record.end(); i++) {
			if (record[in1] == true) {
				flag = true;
				break;
			}
		}
		record[in1] = true;
		if (flag) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}

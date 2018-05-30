#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
	string in1;
	while (getline(cin, in1)) {
		int sum = 0;
		stringstream all(in1);
		string temp;
		while (all >> temp) {
			bool check = true;
			for (unsigned int i = 0; i != temp.size(); ++i) {
				if (!isdigit(temp[i])) {
					check = false; break;
				}
			}
			if (check) {
				sum += atoi(temp.c_str());
			}
		}
		cout << sum << endl;
	}
}

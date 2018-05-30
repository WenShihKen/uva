#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		string in1;
		cin >> in1;
		if (in1[in1.length() - 2] == '3'&&in1[in1.length() - 1] == '5')
			cout << "-\n";
		else if (in1[0] == '9'&&in1[in1.length() - 1] == '4')
			cout << "*\n";
		else if (in1[0] == '1'&&in1[1] == '9'&&in1[2] == '0')
			cout << "?\n";
		else
			cout << "+\n";
	}
}
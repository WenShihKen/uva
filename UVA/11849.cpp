#include<iostream>
#include<map>
using namespace std;

int main()
{
	int in1, in2;
	while (cin >> in1 >> in2) {
		if (in1 == 0 && in2 == 0)
			break;
		map<int, bool>record;
		int cd1, cd2, sell = 0;
		for (int i = 0; i < in1; i++) {
			cin >> cd1;
			record[cd1] = true;
		}
		for (int i = 0; i < in2; i++) {
			cin >> cd2;
			if (record[cd2] == true)
				++sell;
		}
		cout << sell << endl;
	} 
}
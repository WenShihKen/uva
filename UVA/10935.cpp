#include<iostream>

using namespace std;

int main()
{
	int in1;
	while (cin >> in1) {
		if (in1 == 0)
			break;
		bool card[53];
		int temp[53], discard = 0, start = 1;
		fill(card, card + 52, false);
		fill(temp, temp + 52, 0);
		while (1) {
			if (discard == in1 - 1)
				break;
			temp[discard] = start;
			card[start] = true;//есдF
			start++;
			if (start > in1)
				start = 1;
			while (1) {
				bool flag = false;
				if (card[start] == false) {
					start++;
					if (start > in1)
						start = 1;
					while (1) {
						if (card[start] == false) {
							flag = true;
							break;
						}
						else {
							start++;
							if (start > in1)
								start = 1;
						}
					}
					if (flag)
						break;
				}
				else {
					start++;
					if (start > in1)
						start = 1;
				}
			}
			discard++;
		}
		cout << "Discarded cards:";
		for (int i = 0; i < discard; i++) {
			cout << " " << temp[i];
			if (temp[i + 1]) {
				cout << ",";
			}
		}
		cout << endl;
		cout << "Remaining card: ";
		for (int i = 1; i <= in1; i++) {
			if (card[i] == false) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
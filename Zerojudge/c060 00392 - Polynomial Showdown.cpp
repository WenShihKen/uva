#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int factor[9];
	while (cin >> factor[8]) {
		for (int i = 7; i >= 0; i--) {
			cin >> factor[i];
		}
		int check;
		for (check = 8; check >= 0; check--) {
			if (factor[check] != 0) {
				if (check > 1) {
					if (factor[check] == 1) {
						cout << "x^" << check;
					}
					else if (factor[check] == -1) {
						cout << "-x^" << check;
					}
					else {
						if (factor[check] > 1) {
							cout << factor[check] << "x^" << check;
						}
						else if (factor[check] < -1) {
							cout << "-" << abs(factor[check]) << "x^" << check;
						}
					}
				}
				else {
					if (check == 1) {
						if (factor[check] == 1) {
							cout  <<"x";
						}
						else if (factor[check] == -1) {
							cout<<"-" << "x";
						}
						else {
							if (factor[check] > 1) {
								cout  <<factor[check] << "x";
							}
							else if (factor[check] < -1) {
								cout <<factor[check] << "x";
							}
						}
					}
					else if (check == 0) {
						if (factor[check] == 1) {
							cout << 1;
						}
						else if (factor[check] == -1) {
							cout  << -1;
						}
						else {
							cout << factor[check];
						}
					}
				}
				break;
			}
		}
		////////////////////////////////////////////////////////////////
		--check;
		if (check == -2) {
			cout << 0;
		}
		else {
			while (check >= 0) {
				if (factor[check] > 0 && check > 1) {
					if (factor[check] == 1) {
						cout << " " << "+" << " " << "x^" << check;
					}
					else {
						cout << " " << "+" << " " << factor[check] << "x^" << check;
					}
				}
				else if (factor[check] < 0 && check > 1) {
					if (factor[check] == -1) {
						cout << " " << "-" << " " << "x^" << check;
					}
					else {
						cout << " " << "-" << " " << abs(factor[check]) << "x^" << check;
					}
				}
				else if (factor[check] && check < 2) {
					if (check == 1) {
						if (factor[check] == 1) {
							cout << " " << "+" << " " << "x";
						}
						else if (factor[check] == -1) {
							cout << " " << "-" << " " << "x";
						}
						else {
							if (factor[check] > 1) {
								cout << " " << "+" << " " << factor[check] << "x";
							}
							else if (factor[check] < -1) {
								cout << " " << "-" << " " << abs(factor[check]) << "x";
							}
						}
					}
					else if (check == 0) {
						if (factor[check] == 1) {
							cout << " " << "+" << " " << 1;
						}
						else if (factor[check] == -1) {
							cout << " " << "-" << " " << 1;
						}
						else {
							if (factor[check] > 1) {
								cout << " " << "+" << " " << factor[check];
							}
							else if (factor[check] < -1) {
								cout << " " << "-" << " " << abs(factor[check]);
							}
						}
					}
				}
				check--;
			}
		}
		cout << endl;
	}
	return 0;
}

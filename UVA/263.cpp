#include<iostream>
#include<algorithm>
#include<cmath>
#include<map>

using namespace std;

bool cmp_big(long long int i,long long int j)
{
	return i > j;
}

bool cmp_small(long long int i, long long int j)
{
	return i < j;
}

int main()
{
	long long int in1;
	while (cin >> in1) {
		if (in1 == 0)
			break;
		long long int temp = in1, loop = 1;
		map<long long int, long long int>record;
		cout << "Original number was " << temp << endl;
		long long int digits = 0, temp_number = temp;
		while (temp) {
			temp /= 10;
			digits++;
		}
		long long int big[100];
		long long int small[100];
		for (long long int i = 0; i < digits; i++) {
			big[i] = temp_number % 10, small[i] = temp_number % 10;
			temp_number /= 10;
		}
		sort(big, big + digits, cmp_small), sort(small, small + digits, cmp_big);
		long long int t1 = 0, t2 = 0;
		for (long long int i = 0; i < digits; i++) {
			t1 = t1 + big[i] * pow(10, i);
			t2 = t2 + small[i] * pow(10, i);
		}
		temp_number = t1 - t2;
		cout << t1 << " - " << t2 << " = " << temp_number << endl;
		
		/////////////////////////////////////////////////////////////////////////////////////////////
		long long int next = temp_number;
		long long int save = next;
		record[save] = 1;
		while (1) {

			long long int t_next = next;
			long long int t_digits = 0;
			while (t_next) {
				t_next /= 10;
				t_digits++;
			}
			t_next = save;
			long long int t_big[100];
			long long int t_small[100];
			for (long long int i = 0; i < t_digits; i++) {
				t_big[i] = t_next % 10, t_small[i] = t_next % 10;
				t_next /= 10;
			}
			sort(t_big, t_big + t_digits, cmp_small), sort(t_small, t_small + t_digits, cmp_big);
			long long int t_t1 = 0, t_t2 = 0;
			for (long long int i = 0; i < t_digits; i++) {
				t_t1 = t_t1 + t_big[i] * pow(10, i);
				t_t2 = t_t2 + t_small[i] * pow(10, i);
			}
			t_next = t_t1 - t_t2;
			cout << t_t1 << " - " << t_t2 << " = " << t_next << endl;
			++loop;
			if (record[t_next]) {
				break;
			}
			else {
				save = t_next;
			}
			record[t_next] = 1;
		}
		cout << "Chain length " << loop << endl;
		cout << endl;
	}
}
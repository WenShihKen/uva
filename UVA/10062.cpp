/**
 *  @judge UVA
 *  @id 10062
 *  @name Tell me the frequencies!
 * 
 *  @tag Sort
 */
#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
typedef long long int ll;
using namespace std;
struct p
{
	int asc = 0;
	int count = 0;
};
bool cmp(p a, p b)
{
	if (a.count == b.count)
	{
		return a.asc > b.asc;
	}
	return a.count < b.count;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string in1;
	while (getline(cin, in1))
	{
		p pp[128] = {};
		for (int i = 0; i < in1.length(); i++)
		{
			pp[in1[i]].asc = in1[i];
			pp[in1[i]].count++;
		}
		sort(pp, pp + 128, cmp);
		for (int i = 0; i < 128; i++)
		{
			if (pp[i].asc == 0 && pp[i].count == 0)
			{
				continue;
			}
			cout << pp[i].asc << " " << pp[i].count << endl;
		}
		cout << endl;
	}
}
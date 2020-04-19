/**
 *  @judge Zerojudge
 *  @id e908
 *  @name 星期幾咧
 *  @contest
 * 
 *  @tag ad-hoc
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

int main()
{
    map<string, ll> day;
    day["Monday"] = 0;
    day["Tuesday"] = 1;
    day["Wednesday"] = 2;
    day["Thursday"] = 3;
    day["Friday"] = 4;
    day["Saturday"] = 5;
    day["Sunday"] = 6;
    string in1;
    while (cin >> in1)
    {
        ll p;
        cin >> p;
        p = (p + day[in1]) % 7;
        for (auto i : day)
        {
            if (i.second == p)
            {
                cout << i.first << endl;
                break;
            }
        }
    }
}

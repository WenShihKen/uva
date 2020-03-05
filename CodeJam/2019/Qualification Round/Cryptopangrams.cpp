#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

typedef long long int LL;
//I can't figure out why it gets runtime error :(

LL gcd(LL m, LL n)
{
    if (n == 0)
        return m;
    else
        return gcd(n, m % n);
}

int main()
{

    LL t, c = 0;
    cin >> t;
    while (t--)
    {
        LL all[10005] = {};
        LL N, L;
        cin >> N >> L;
        LL temp1, temp2;
        cin >> temp1 >> temp2;
        LL gcd_temp = gcd(temp1, temp2);
        all[0] = temp1 / gcd_temp;
        all[1] = gcd_temp;
        all[2] = temp2 / gcd_temp;
        for (LL i = 3; i <= L; i++)
        {
            LL temp;
            cin >> temp;
            all[i] = temp / all[i - 1];
        }
        vector<LL> have_sorted;
        for (LL i = 0; i <= L; i++)
        {
            have_sorted.push_back(all[i]);
        }
        //
        sort(have_sorted.begin(), have_sorted.end());
        auto delete_same_value = unique(have_sorted.begin(), have_sorted.end());
        have_sorted.resize(distance(have_sorted.begin(), delete_same_value));
        //
        string ans = "";

        for (LL i = 0; i <= L; i++)
        {
            for (LL j = 0; j <= have_sorted.size(); j++)
            {
                if (all[i] == have_sorted[j])
                {
                    ans += ('A' + (j % 26));
                    break;
                }
            }
        }
        printf("Case #%d: %s\n", ++c, ans.c_str());
    }
}
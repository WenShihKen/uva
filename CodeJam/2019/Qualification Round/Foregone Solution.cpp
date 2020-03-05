#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        int str;
        cin >> str;
        int in1[105] = {}, temp = str, count = 0;
        while (temp > 0)
        {
            in1[count++] = temp % 10;
            temp /= 10;
        }
        int ans1 = 0;
        for (int i = count; i >= 0; i--)
        {
            if (in1[i] == 4)
            {
                ans1 += pow(10, i);
            }
        }
        int ans2 = str - ans1;
        printf("Case #%d: %d %d\n", ++c, ans1, ans2);
    }
}
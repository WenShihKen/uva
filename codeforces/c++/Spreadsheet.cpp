/*
    Author: Ken
    Problems: 1B
*/
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string in1;
        cin >> in1;
        int check = in1.find('C');
        if (in1[0] == 'R' && in1[1] >= 48 && in1[1] <= 57 && check > 0)
        { //RXCY  X=int Y=int
            int temp1 = 0, temp2 = 0, i;
            for (i = 1; in1[i] != 'C'; i++)
            {
                temp1 = temp1 * 10 + (in1[i] - '0');
            }
            for (i = i + 1; i <= in1.length() - 1; i++)
            {
                temp2 = temp2 * 10 + (in1[i] - '0');
            }
            int t[100] = {}, j = 0;
            while (temp2)
            {
                if (temp2 % 26 == 0)
                {
                    t[j] = 26;
                    temp2 /= 26;
                    temp2 -= 1;
                }
                else
                {
                    t[j] = temp2 % 26;
                    temp2 /= 26;
                }
                j += 1;
            }
            for (int c = j - 1; c >= 0; c--)
                printf("%c", t[c] + 64);
            printf("%d\n", temp1);
        }
        else
        {
            int temp1 = 0, temp2 = 0, i;
            for (i = 0; (in1[i] >= 65 && in1[i] <= 90); i++)
            {
                temp1 = temp1 * 26 + (in1[i] - 64);
            }
            for (; i <= in1.length() - 1; i++)
            {
                temp2 = temp2 * 10 + in1[i] - 48;
            }
            printf("R%dC%d\n", temp2, temp1);
        }
    }
}
/**
 *  @judge CodeForces
 *  @id 1281A
 *  @name Suffix Three
 *  @contest Codeforces Round #607
 * 
 *  @tag string
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
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        if (s[s.length() - 1] == 'o')
        {
            printf("FILIPINO\n");
        }
        else if (s[s.length() - 1] == 'u')
        {
            printf("JAPANESE\n");
        }
        else if (s[s.length() - 1] == 'a')
        {
            printf("KOREAN\n");
        }
    }
}
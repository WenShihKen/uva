/**
 *  @judge UVA
 *  @id 11332
 *  @name Summing Digits
 *  @contest 
 * 
 *  @tag math
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
    int n;
    while (cin >> n && n != 0)
    {
        int ans;
        ans = n % 9 == 0 ? 9 : n % 9;
        cout << ans << endl;
    }
}

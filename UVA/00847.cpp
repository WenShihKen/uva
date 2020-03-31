#include <algorithm>
#include <map>
#include <iostream>
#include <string>
#include <set>
#include <queue>
#include <cmath>
typedef long long int ll;
using namespace std;
#define maxN 200005

//ll a[maxN]= {};

int main()
{
    //	ios::sync_with_stdio(0);
    //	cin.tie(0);
    ll t;
    while (cin >> t)
    {
        while (t > 18)
        {
            if (t % 18 != 0)
            {
                t /= 18;
                t += 1;
            }
            else
            {
                t /= 18;
            }
        }
        //cout<<t<<endl;
        if (t <= 9)
        {
            printf("Stan wins.\n");
        }
        else
        {
            printf("Ollie wins.\n");
        }
    }
}
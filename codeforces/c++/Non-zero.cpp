/**
 *  @judge CodeForces
 *  @id 1300A
 *  @name Non-zero
 *  @contest Codeforces Round #618
 * 
 *  @tag Math
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
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	while(n--) {
		int in1,a;
		cin>>in1;
		int sum=0,count0=0;
		for(int i=0; i<in1; i++) {
			cin>>a;
			sum+=a;
			if(a==0) {
				count0++;
			}
		}
		int ans = count0+(count0+sum==0);
		cout<<ans<<endl;
	}
}